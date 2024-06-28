#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to search for
 * Return: if match between @s and @accept, or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	for (; *s; s++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (*s == accept[count])
				return (s);
		}
	}
	return (NULL);
}
