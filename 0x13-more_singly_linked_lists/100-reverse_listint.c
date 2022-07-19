#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: start of list
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *r;
	listint_t *n;

	r = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = r;
		r = *head;
		*head = n;
	}

	*head = r;
	return (*head);
}
