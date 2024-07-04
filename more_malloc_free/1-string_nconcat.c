#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of bytes
 * Return: a pointer to the concatenated space
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pin;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	if (n > len2)
		n = len2;

	pin = malloc(sizeof(char) * (len1 + n + 1));
	if (pin == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		pin[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		pin[i] = s2[j];

	pin[i] = '\0';

	return (pin);

}
