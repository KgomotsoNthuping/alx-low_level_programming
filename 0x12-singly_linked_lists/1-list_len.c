#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in list
 * @h: pointer to list
 *
 * Return: elements
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
