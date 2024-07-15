#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_int - prints int
 * @args: the list of args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints a char
 * @args: the list of args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_string - prints a string
 * @args: the list of args
 */
void print_string(va_list args)
{
	char *z = va_arg(args, char *);

	if (!z)
	{
		printf("(nil)");
		return;
	}
	printf("%s", z);
}
/**
 * print_float - prints floats
 * @args: list of args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints all
 * @format: placeholders of arg
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_list args;
	char *sep1 = "", *sep2 = ", ";
	int i = 0, j = 0;

	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].z != '\0')
		{
			if (format[i] == types[j].z)
			{
				printf("%s", sep1);
				types[j].f(args);
				sep1 = sep2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
