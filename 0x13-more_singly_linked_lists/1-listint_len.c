#include "lists.h"

/**
 * listint_len - returns number of elements in a listint_t list
 * @h: list to count
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
