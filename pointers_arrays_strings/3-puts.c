#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
