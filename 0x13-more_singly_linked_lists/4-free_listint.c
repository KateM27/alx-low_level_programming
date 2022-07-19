#include "lists.h"

/**
 * free_listint - frees a list
 * @head: start of node
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *elem;

	while (head != NULL)
	{
		elem = head;
		free(head);
		head = elem->next;
	}
}
