#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - it is a singly linked list
 * @str: is a pointer to a character string.
 * @len: is the length of the string pointed to by "str"
 * @next: is a pointer to the next node in the linked list
 *
 * Description: signly linked list node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);

#endif
