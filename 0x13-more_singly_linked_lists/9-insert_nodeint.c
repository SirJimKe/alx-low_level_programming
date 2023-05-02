#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a double pointer to head node
 * @idx: index of the list where the new node will be added
 * @n: integer member
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	current_node = *head;
	for (i = 0; current_node != NULL && i < idx - 1; i++)
		current_node = current_node->next;

	if (i != idx - 1 || current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
