#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: start of list
 *
 * Return: Nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *elem;

	if (head != NULL)
	{
		elem = *head;
		while ((tmp = elem) != NULL)
		{
			elem = elem->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: start of list
 *
 * Return: size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listp_t *ptr, *newNode, *addNode;
	listint_t *elem;

	ptr = NULL;
	while (*h != NULL)
	{
		newNode = malloc(sizeof(listp_t));

		if (newNode == NULL)
			exit(98);

		newNode->p = (void *)*h;
		newNode->next = ptr;
		ptr = newNode;

		addNode = ptr;

		while (addNode->next != NULL)
		{
			addNode = addNode->next;
			if (*h == addNode->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (nodes);
			}
		}

		elem = *h;
		*h = (*h)->next;
		free(elem);
		nodes++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (nodes);
}
