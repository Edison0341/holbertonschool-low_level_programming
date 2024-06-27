#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: the character we're looking for
 * Return: pointer to the first ocurrence of @c,
 * return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}

