#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node from a dlistint_t
 * list at a given index
 * @head: pointer to the head of the dlistint_t list
 * @index: index of the node to delete
 *
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *h;

	if (*h == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *h)
	{
		*h = tmp->next;
		if (*h != NULL)
			(*h)->prev = NULL;
	}

	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
