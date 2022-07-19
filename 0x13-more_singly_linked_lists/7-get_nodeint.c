#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a list
 * @head: start of node
 * @index: index of node, starting at 0
 *
 * Return: nth node or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
