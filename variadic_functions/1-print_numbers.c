#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the space between numbers
 * @n: variadic function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list printeador;

	va_start(printeador, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(printeador, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(printeador);
}
