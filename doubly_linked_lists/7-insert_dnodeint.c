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

	current = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*h = new;
		return (*h);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
