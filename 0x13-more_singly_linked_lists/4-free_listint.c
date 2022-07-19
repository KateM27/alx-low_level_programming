#include "lists.h"

/**
 * free_listint - frees a list
 * @head: start of node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *elem = head;

	while (elem)
	{
		free(head);
		head = elem->next;
		elem = elem->next;
	}
	free(head);
}
