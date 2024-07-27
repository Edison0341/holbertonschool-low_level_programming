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
	dlistint_t *current = *h;
	dlistint_t *new;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx > 1 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL || current->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;

	return (new);
}
