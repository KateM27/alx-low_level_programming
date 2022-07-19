#include "lists.h"

/**
 * sum_listint - adds all the data(n) of a list
 * @head: start of list
 *
 * Return: sum of data(n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
