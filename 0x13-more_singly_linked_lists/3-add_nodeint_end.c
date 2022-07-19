#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of list
 * @head: start of node
 * @n: new node
 *
 * Return: address of new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *elem;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		elem = *head;
		while (elem->next != NULL)
		{
			elem = elem->next;
		}
		elem->next = newNode;
		return (newNode);
	}
}
