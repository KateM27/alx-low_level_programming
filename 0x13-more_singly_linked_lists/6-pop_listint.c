#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: start of node
 *
 * Return: head's node data(n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *elem;
	int i;

	if (*head == NULL)
		return (i);
	elem = *head;
	i = elem->n;
	free(*head);
	*head = elem->next;
	return (i);
}
