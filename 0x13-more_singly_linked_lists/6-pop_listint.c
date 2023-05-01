#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list, and returns its data
 * @head: a pointer to a pointer to head node
 * Return: n
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	data = temp->n;
	free(temp);

	return (data);
}
