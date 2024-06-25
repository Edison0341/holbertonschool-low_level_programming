#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies a string with the terminating null byte
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; count >= 0; count++)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
	}
	return (dest);
}
