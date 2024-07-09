#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function that executes a function given as a parameter on
 * the array
 * @array: array to execute
 * @size: size of the array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
