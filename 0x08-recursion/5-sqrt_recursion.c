#include "main.h"

int _checker(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to be chacked
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_checker(1, n));
}

/**
 * _checker - checkes for the natural square root
 *
 * @x: integer
 * @y: integer
 *
 * Return: int
 */
int _checker(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (_checker(x + 1, y));
}
