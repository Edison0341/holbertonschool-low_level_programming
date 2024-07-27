#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: head of the list
 * @idx: location to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		*h = new;
		return (new);
	}
	current = *h;
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	new->next = current->next;
	new->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}

	current->next = new;
	return (new);
	
}
