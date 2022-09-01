#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint_t list
 * @head: head of the dlistint_t list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *buff;

	while (head)
	{
		buff = head->next;
		free(head);
		head = buff;
	}
}
