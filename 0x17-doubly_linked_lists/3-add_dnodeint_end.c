#include "lists.h"


static dlistint_t *new_node(const int n);

/**
 * add_dnodeint_end - adds a new node
 * @head: pointer
 * @n: node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new;

	if (*head)
	{
		node = *head;
		while (node->next)
			node = node->next;
		new = new_node(n);
		if (!new)
			return (NULL);
		node->next = new;
		node->next->prev = node;
	}
	else
	{
		node = new_node(n);
		if (!node)
			return (NULL);
		*head = node;
	}
	return (node);
}


/**
 * new_node - creates a new node
 * @n: node
 *
 * Return: new node.
 */
static dlistint_t *new_node(const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	return (node);
}
