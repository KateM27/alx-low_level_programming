#include "lists.h"

/**
 * list_len - prints number of elements in a linked list
 * @h: pointer to the start of list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int lst = 0;

	while (h != NULL)
	{
		h = h->next;
		lst++;
	}
	return (lst);
}

