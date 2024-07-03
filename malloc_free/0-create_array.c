#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates array of char
 * @size: size of array
 * @c: array
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *x;

	if (size == 0)
		return (NULL);

	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; x[i] == '\0'; i++)
		x[i] = c;

	return (x);
}
