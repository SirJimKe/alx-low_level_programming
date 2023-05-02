#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the first element of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *runner;

	if (head == NULL)
		exit(98);

	current = head;
	runner = head;

	while (current && runner && runner->next)
	{
		current = current->next;
		runner = runner->next->next;
		count++;

		if (current == runner)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			return (count);
		}
		printf("[%p] %d\n", (void *)current, current->n);
	}

	return (count);
}
