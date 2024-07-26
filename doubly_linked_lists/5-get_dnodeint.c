#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - gets the nth node of the list
 * @head: head of the lis
 * @index: which node to stop at
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++
	}
	return (head);
}
