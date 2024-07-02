#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: counter
 * @argv: string
 * Return: 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i, j, numbero;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			numbero = 1;
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					numbero = 0;
					break;
				}
			}
			if (!numbero)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
