#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: start of node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *elem;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		elem = *head->next
		free(*head);
		*head = elem;
	}
}
