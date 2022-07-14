#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the start of a list
 * @head: start of list
 * @str: string to put in list
 *
 * Return: address of new node or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i = 0;

	while (str[i])
		i++;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
