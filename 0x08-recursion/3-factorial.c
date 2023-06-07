#include "main.h"
/**
 * factorial - calculates the factorial of  given numbers
 *
 * @n: number to be calculated
 *
 * Return: -1 if n is negeative and returns the factorial of a given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
