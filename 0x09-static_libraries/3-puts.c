#include "main.h"
/**
 * _puts - print a string followed with a new line
 *
 * @str: char to be printed
 *
 * Retur: 0
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar (str[c]);
		c++;
	}
	_putchar ('\n');
}
