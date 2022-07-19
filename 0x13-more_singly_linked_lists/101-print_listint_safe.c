#include "lists.h"

/**
* print_listint_safe- prints all elements of a list
* @head: pointer to the first element
*
* Description: this function prints all elements of a list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		if ((head->next) >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (nodes);
		}
		head = head->next;
	}

	return (nodes);
}
