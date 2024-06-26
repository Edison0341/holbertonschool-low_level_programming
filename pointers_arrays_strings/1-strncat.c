#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: pointer
 * @src: pointer
 * @n: variable
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthD, lengthS;

	for (lengthD = 0; dest[lengthD] != '\0';)
	{
		lengthD++;
	}

	for (lengthS = 0; src[lengthS] != '\0' && n > 0;)
	{
		dest[lengthD] = src[lengthS];
		lengthS++;
		lengthD++;
		n--;
	}

	dest[lengthD] = '\0';
	return (dest);
}


