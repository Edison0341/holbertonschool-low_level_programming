#include "main.h"
/**
 * string_toupper - converts lowercase letters for uppercase letters
 *
 * @str: pointer to the string to convert
 *
 * Return: the converte string.
 */

char *string_toupper(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			str[count] -= 'a' - 'A';
	}
	return (str);
}
