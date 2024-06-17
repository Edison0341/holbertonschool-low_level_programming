#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char palabra;
	int numero;
	long int numero_largo;
	long long int numero_largo_largo;
	float numero_volador;

	printf("size of a char: %zu byte(s)\n", sizeof(palabra));
	printf("size of a int: %zu byte(s)\n", sizeof(numero));
	printf("size of a long int: %zu byte(s)\n", sizeof(numero_largo));
	printf("size of a long long int: %zu byte(s)\n", sizeof(numero_largo_largo));
	printf("size of a float int: %zu byte(s)\n", sizeof(numero_volador));
	return (0);
}
