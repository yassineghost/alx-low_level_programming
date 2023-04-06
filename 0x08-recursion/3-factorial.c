#include "main.h"
/**
 * factorial - print the factorial of a given number
 *
 * @n: the number to calculate it's factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
