#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: start of list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
