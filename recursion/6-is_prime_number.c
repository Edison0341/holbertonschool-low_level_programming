#include "main.h"
/**
 * primo - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 * Return: (1)
 */

int primo(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (primo(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: integer
 * Return: (1);
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primo(n, 2));
}
