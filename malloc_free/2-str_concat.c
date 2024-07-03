#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *anostr;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	anostr = malloc(sizeof(char) * (i + j + 1));

	if (anostr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		anostr[k] = s1[k];

	for (l = 0; s2[l] != '\0'; l++, k++)
		anostr[k] = s2[l];

	return (anostr);
}
