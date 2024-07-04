#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the memory block to be allocated
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pn;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pn = malloc(nmemb * size);
	if (pn != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			pn[i] = 0;
		return (pn);
	}
	else
		return (NULL);
}
