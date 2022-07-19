#include "lists.h"

/**
 * free_listp - frees a list
 * @head: start of list
 *
 * Return: Nothing
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: start of list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *ptr, *newNode, *addNode;

	ptr = NULL;
	while (head != NULL)
	{
		newNode = malloc(sizeof(listp_t));

		if (newNode == NULL)
			exit(98);

		newNode->p = (void *)head;
		newNode->next = ptr;
		ptr = newNode;

		addNode = ptr;

		while (addNode->next != NULL)
		{
			addNode = addNode->next;
			if (head == addNode->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&ptr);
	return (nodes);
}
