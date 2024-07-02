#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - find square root
 * @n: int to find square root
 * @root: square root
 * Return: int
 */
int square(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
		return (square(n, root + 1));
	else
		return (-1);
}
