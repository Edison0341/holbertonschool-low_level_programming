#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * @c: variable
 *
 * Return: (1) for alphabetic character
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
