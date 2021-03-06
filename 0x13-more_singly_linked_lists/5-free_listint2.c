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
	listint_t *tmp;

	if (head != NULL)
	{
		elem = *head;
		while ((tmp = elem) != NULL)
		{
			elem = elem->next;
			free(tmp);
		}
		*head = NULL;
	}
}
