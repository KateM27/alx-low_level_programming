#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: start of node
 * @idx: index where new node should be inserted
 * @n: value of new node
 *
 * Return: address of new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode *elem;
	unsigned int lst;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		elem = *head;
		for (lst = 0; lst < idx - 1 && elem != NULL; lst++)
		{
			elem = elem->next;
		}
		if (elem == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = elem->next;
	elem->next = newNode;
	return (newNode);
}
