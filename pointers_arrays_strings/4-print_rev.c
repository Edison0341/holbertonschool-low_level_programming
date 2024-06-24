#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: variable
 */

void print_rev(char *s)
{
	int i, n, len;


	for (i = 0; s[i] != '\0';)
	{
		i++;
	}

	len = i;
	for (n = len - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
