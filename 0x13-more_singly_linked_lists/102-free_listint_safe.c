#include "lists.h"

/**
* free_listint_safe- frees a list
* @h: start of list
*
* Return: size of list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *tmp, *elem = head;

	if (head == NULL)
		return (0);
	while (elem)
	{
		nodes++;
		if ((elem->next) >= elem)
		{
			return (nodes);
		}
		tmp = elem;
		elem = elem->next;
		free(tmp);
	}
	*head = NULL;
	return (nodes);
}
