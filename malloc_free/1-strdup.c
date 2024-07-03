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

	for (i = 0; i < j; i++)
		anostr[i] = str[i];

	return (anostr);
}
