#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_update_value - Updates the value associated with a key
 * @node: The node in the hash table
 * @value: The new value to be associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;

	return (1);
}

/**
 * hash_table_add_node - Adds a new node to the hash table
 * @ht: The hash table
 * @index: The index where the new node should be added
 * @key: The key of the new node
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_add_node(hash_table_t *ht, unsigned long int index,
			const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

/**
 * hash_table_set - Adds an element to the hash table or updates the value
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (hash_table_update_value(current_node, value));

		current_node = current_node->next;
	}

	return (hash_table_add_node(ht, index, key, value));
}
