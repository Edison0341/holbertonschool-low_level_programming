#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - define function
 * @head: describe argument
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_dlistint(head->next);
	free(head);
}
