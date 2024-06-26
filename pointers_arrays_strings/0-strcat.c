#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * Return: (0)
 */

char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	for (lengthD = 0; *(dest + lengthD) != '\0';)
	{
		lengthD++;
	}

	for (lengthS = 0; *(src + lengthS) != '\0' && lengthD < 97; lengthS++)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
	}

	*(dest + lengthD) = '\0';
	return (dest);
}

