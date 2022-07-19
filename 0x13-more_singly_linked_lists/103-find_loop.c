#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: start of list
 *
 * Return: address of the node where the loop starts, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p2;
	listint_t *p1;

	p2 = head;
	p1 = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = p1;
			p1 =  p2;
			while (1)
			{
				p2 = p1;
				while (p2->next != head && p2->next != p1)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}
