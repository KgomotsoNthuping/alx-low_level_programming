#include "lists.h"

/**
 * dlistint_len - count number of elements
 * @h: pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
