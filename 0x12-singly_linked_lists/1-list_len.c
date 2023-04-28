#include "lists.h"
#include <stddef.h>

/**
 * list_len - returns number f elements in a linked list_t
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
