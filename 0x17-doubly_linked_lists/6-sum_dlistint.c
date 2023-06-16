#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a list
 * @head: pointer to the head node
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
