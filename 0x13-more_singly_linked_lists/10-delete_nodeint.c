#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at index index
 * @head: a doble pointer to head node
 * @index: the index of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	for (i = 0; prev != NULL && i < index - 1; i++)
		prev = prev->next;

	if (i != index - 1 || prev->next == NULL)
		return (-1);

	current = prev->next;
	prev->next = current->next;
	free(current);

	return (1);
}
