#include "lists.h"
/**
 * sum_dlistint - sums all element of a list
 * @head:pointer to the head of the list
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
