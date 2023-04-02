#include "main.h"
/**
 * print_rev - print the string in reverse
 *
 * @s: char to be reversd
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int c, r;

	c = 0;
	while (s[c] != '\0')
		c++;
	for (r = --c; r >= 0; r--)
	{
		_putchar (s[r]);
	}
	_putchar ('\n');
}
