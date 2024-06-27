#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: empty array
 * @src: array to copy
 * @n: bytes in memory area
 * Return: copied array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
