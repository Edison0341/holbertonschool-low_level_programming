#include "main.h"
#include <stdio.h>
/**
 * main - this function prints a name
 * @argc: is the count or index of argv
 * @argv: is the value of the string
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
