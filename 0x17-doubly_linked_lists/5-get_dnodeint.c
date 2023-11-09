#include "lists.h"

/**
 * get_dnodeint_at_index - indexer node
 * @head: pointer
 * @index: indexer
 *
 * Return: found node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t indexer = 0;
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = head;
	if (node->prev)
		node = node->prev;
	while (indexer < index && node)
	{
		node = node->next;
		indexer++;
	}
	return (node);
}
