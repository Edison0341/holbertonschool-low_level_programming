#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string pointer
 * Return: change string
 */

char *leet(char *s)
{
	int count, j;
	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (count = 0; s[count] != '\0'; count++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[count] == lower[j] || s[count] == upper[j])
			{
				s[count] = numbers[j];
			}
		}
	}
	return (s);
}
