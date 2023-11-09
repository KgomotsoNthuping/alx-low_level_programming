#include "lists.h"


static dlistint_t *new_node(dlistint_t **head, const int n);

/**
 * add_dnodeint - adds a new node
 * @head: pointer
 * @n: node
 *
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = new_node(head, n);
	if (!node)
		return (NULL);
	*head = node;
	return (node);
}

/**
 * new_node - new node
 * @head: pointer
 * @n: node
 *
 * Return: new node on Sucess else NULL.
 */
static dlistint_t *new_node(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head)
	{
		node->next = *head;
		(*head)->prev = node;
	}

	return (node);
}
