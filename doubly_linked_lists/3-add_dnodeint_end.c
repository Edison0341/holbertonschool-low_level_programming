#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add new nodes to the end of the list
 * @head: current place in the list
 * @n: int to add to the list
 * Return: pointer to current position in lists
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	new->prev = current;
	return (new);
}
