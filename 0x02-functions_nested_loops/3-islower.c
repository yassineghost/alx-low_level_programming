#include "main.h"
/**
 * int _islower(int c) - prints 1 if the input is lowercase and 0 otherwise
 *  * @c:  is the int that will use for the argument of the function
 *  Return : 1 if lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
