#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size of the memory block
 * Return: pointer to the address of the memory block
 */

void *malloc_checked(unsigned int b)
{
	void *memblk;

	memblk = malloc(b);
	if (memblk == NULL)
		exit(98);
	return (memblk);
}
