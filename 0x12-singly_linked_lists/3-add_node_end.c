#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list
 * @head: start of list
 * @str: string to put in list
 *
 * Return: address of new node or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *fNode;
	int i = 0;

	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		fNode = *head;
		while (fNode->next != NULL)
			fNode = fNode->next;
		fNode->next = newNode;
		return (newNode);
	}
}
