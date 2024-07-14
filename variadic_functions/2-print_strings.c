#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: space between strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *x;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, char *);
		if (x != NULL)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
