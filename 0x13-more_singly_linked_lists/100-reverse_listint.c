#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: a double pointer to the head node
 * Return: a poinyr to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *current_node;

	prev_node = NULL;
	current_node = *head;

	while (current_node != NULL)
	{
		listint_t *next_node;

		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
