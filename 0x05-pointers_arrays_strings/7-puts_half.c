#include "main.h"
/**
 * puts_half - prints the second half of a string
 *
 * @str: string to be devides
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int c = 0;
	int b;
	while (str[c] != '\0')
	{
		c++;
	}
	if (c % 2 == 0)
	{
		b = c / 2;
	}
	else
	{
		b = (c - 1) / 2;
	}
	while ( str[b] != '\0')
	{
		_putchar (str[b]);
		b++;
	}
	_putchar ('\n');
}
