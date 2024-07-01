#include "main.h"
/**
 * factorial - returns factorial of a given number
 * @n: factorial amount
 * Return: factorial values
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return(-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
