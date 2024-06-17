#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char palabra;
	int numero;
	long int numero_largo;
	long long int numero_largo_largo;
	float numero_volador;

	printf("Size of a char: %lu byte(s)\n", sizeof(palabra));
	printf("Size of an int: %lu byte(s)\n", sizeof(numero));
	printf("Size of a long int: %lu byte(s)\n", sizeof(numero_largo));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(numero_largo_largo));
	printf("Size of a float: %lu byte(s)\n", sizeof(numero_volador));
	return (0);
}
