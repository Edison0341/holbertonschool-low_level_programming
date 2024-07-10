#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -function that searches for an integer
 * @array: array to search for
 * @size: size of the array
 * @cmp: function to compare elements in the array
 * Return: 1 if success -1 if false
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || *cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (0);
}
