#include "main.h"
/**
 * _islower - function to find  lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 1 for lowercase char. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
