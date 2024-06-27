#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s:egment to return bytes from
 * @accept: the bytes to include
 * Return: (c) number of bytes from @s which consist of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, trap;
	int c = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] != 32)
		{
			for (trap = 0; accept[trap] != '\0'; trap++)
			{
				if (s[count] == accept[trap])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}

