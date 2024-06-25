#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: variable to use
 */

void puts_half(char *str)
{
	int count, i;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
		{
			break;
		}
	}

	if (count % 2 == 1)
		i = count / 2;
	else
		i = (count - 1) / 2;

	for (i++; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
