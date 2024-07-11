#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - this function executes the calculator
 * @argc: argument count
 * @argv: argument vector
 * Return: the result of the operation
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (((*argv[2] == '/') || (*argv[2] == '%')) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
