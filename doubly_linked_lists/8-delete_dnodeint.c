#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the list
 * @index: location of the node to delete
 * Return: pointer to head of list
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current, *subsequent;

	if (!head || !*head)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (!current)
	{
		return (-1);
	}
	subsequent = current;
	if (subsequent->prev)
	{
		subsequent->prev->next = subsequent->next;
	}
	if (subsequent->next)
	{
		subsequent->next->prev = subsequent->prev;
	}
	free(subsequent);
	return (1);
}
