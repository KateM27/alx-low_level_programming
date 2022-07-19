#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a certain index in list
 * @head: start of node
 * @index: index of node to be deleted starting at 0
 *
 * Return: 1 if it succeeds -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode, *elem;
	unsigned int lst;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		elem = elem->next;
		free(*head);
		*head = elem;
		return (1);
	}
	delNode = *head;
	for (lst = 0; lst < index - 1; lst++)
	{
		if (delNode->next == NULL)
			return (-1);
		delNode = delNode->next;
	}
	next = delNode->next;
	delNode->next = next->next;
	free(next);
	return (1);
}
