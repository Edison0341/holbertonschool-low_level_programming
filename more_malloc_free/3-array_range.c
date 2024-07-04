#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: smallest number
 * @max: largest number
 * Return: pointer to the new created array
 */

int *array_range(int min, int max)
{
	int *pn;
	int i, j = 0;

	if (min > max)
		return (NULL);
	pn = malloc(sizeof(*pn) * ((max - min) + 1));
	if (pn != NULL)
	{
		for (i = min; i <= max; i++)
		{
			pn[j] = i;
			j++;
		}
		return (pn);
	}
	else
		return (NULL);
}
