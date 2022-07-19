#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head: start of node
 * @n: new node
 *
 * Return: address of new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
