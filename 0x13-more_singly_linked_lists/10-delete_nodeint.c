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
	unsigned int lst = 1;

	if (*head == NULL)
		return (-1);
	elem = *head;
	if (index == 0)
	{
		if (elem == NULL)
			return (-1);
		*head = elem->next;
		free(elem);
		return (1);
	}
	while (elem)
	{
		if (lst == index)
		{
			delNode = elem->next;
			elem->next = delNode->next;
			free(delNode);
			return (1);
		}
		lst++;
		elem = elem->next;
	}
	return (-1);
}
