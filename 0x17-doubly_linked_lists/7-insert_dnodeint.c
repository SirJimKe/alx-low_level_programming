#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node a specific index
 * @h: pointer to the head of the list
 * @idx: the index at which the new node should be inserted
 * @n: value of the new node
 * Return: address of the new element, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *h;
	unsigned int count = 0;


	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}

	current->next = new_node;

	return (new_node);
}
