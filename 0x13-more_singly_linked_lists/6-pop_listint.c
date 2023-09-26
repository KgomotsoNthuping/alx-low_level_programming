#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 * @head: list head
 *
 * Return: the data in list is deleted
 * or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
