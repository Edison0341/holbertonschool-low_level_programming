#include "main.h"
/**
 * print_square - prints a square
 * @size: variable to use
 */

void print_square(int size)
{
	int y, x;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
