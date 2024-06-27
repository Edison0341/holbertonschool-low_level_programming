#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalize
 * Return: capitalize string
 */
char *cap_string(char *str)
{
	int  count, trap;
	char symbols[14] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n',
		'\t', '\0', ' '};
	for (count = 0; str[count] != '\0'; count++)
	{
		if (count == 0 && str[count] >= 'a' && str[count] <= 'z')
		{
			str[count] = str[count] - 32;
		}

		for (trap = 0; trap < 14; trap++)
		{
			if (str[count] == symbols[trap])
			{
				if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
				{
					str[count + 1] = str[count + 1] - 32;
				}
			}
		}
	}
	return (str);
}
