#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in the hash table
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);

		current_node = current_node->next;
	}

	return (NULL);
}
