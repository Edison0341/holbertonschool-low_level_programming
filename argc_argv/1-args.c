#include "main.h"
#include <stdio.h>
/**
 *main - program to print the number of argument
 *@argc: counter
 *@argv: value
 *Return: (0)
 */

int main(int argc, char *argv[])
{
	argv[0] = 0;

	printf("%d\n", argc);
	return (0);
}
