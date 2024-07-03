#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: return duplicated string
 */

char *_strdup(char *str)
{
	int i, j;
	char *anostr;

	if (str == NULL)
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
		;

	anostr = malloc(sizeof(char) * (j + 1));

	if (anostr == NULL)
		return (NULL);

	for (i = 0; anostr[i] != '\0'; i++)
		anostr[i] = str[i];

	anostr[j] = '\0';

	return (anostr);
}
