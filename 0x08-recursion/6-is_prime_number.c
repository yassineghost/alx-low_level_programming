#include "main.h"

int _prime(int x, int y);

/**
 * is_prime_number - chackes if the input int is a prime number
 *
 * @n: integer
 *
 * Return: 1 if n is a prime number. 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (_prime(2, n));
}

/**
 * _prime -  checks if the number is a prme number
 *
 * @x: integer
 * @y: integer
 *
 * Return: integer
 */
int _prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (_prome(x + 1, y));
}
