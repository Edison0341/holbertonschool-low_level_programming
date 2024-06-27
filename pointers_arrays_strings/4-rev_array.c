#include "main.h"
/**
 * reverse_array- reverse the content of an array of intergers
 * @a: array of integers
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	count = temp = 0;
	n = n - 1;
	while (count <= n)
	{
		temp = a[n];
		a[n--] = a[count];
		a[count++] = temp;
	}

}
