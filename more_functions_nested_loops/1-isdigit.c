#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @c: variable to use
 * Return: (0)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
