#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to destination
 * @src: point to source
 * @n: variable
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; src[count] != '\0' && count < n; count++)
	{
		dest[count] = src[count];
	}
	while (count < n)
	{
		dest[count++] = '\0';
	}
	return (dest);
}
