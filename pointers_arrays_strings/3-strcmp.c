#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: variable to be compared
 * @s2: variable to be compare by
 * Return: the differece between the two arrays
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'
			&& s1[count] == s2[count]; count++)
		;
	return (s1[count] - s2[count]);

}
