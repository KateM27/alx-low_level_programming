#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: start of node
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *elem, *tmp;

	if (head != NULL)
	{
		elem = *head;
		while ((elem = tmp) != NULL)
		{
			elem = elem->next;
			free(tmp);
		}
		*head = NULL;
	}
}
