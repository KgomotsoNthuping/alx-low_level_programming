#include "lists.h"

static dlistint_t *new_node(int n);

/**
 * insert_dnodeint_at_index - inserts node
 * @h: pointer
 * @idx: indexer
 * @n: new node
 *
 * Return: add node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new;
	size_t j = 0;

	if (!(*h) && !idx)
		return (*h = new_node(n));
	else if (!idx)
		return (*h = add_dnodeint(h, n));
	node = *h;
	if (node->prev)
		while (node->prev)
			node = node->prev;
	else if (!node->next)
		while (node->prev)
			node = node->prev;

	while (++j < idx && node->next)
	{
		node = node->next;
	}
	if (j < idx)
		return (NULL);
	else if (node)
	{
		new = new_node(n);
		if (!new)
			return (NULL);
		if (node->next)
			node->next->prev = new;
		new->prev = node;
		new->next = node->next;
		node->next = new;
	}
	return (new);
}

/**
 * new_node - new node
 * @n: new node
 *
 * Return: node
 */
static dlistint_t *new_node(int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = node->prev = NULL;

	return (node);
}
