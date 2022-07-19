#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t lst = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		lst++;
	}
	return (lst);
}
