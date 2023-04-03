#include "main.h"
/**
 * rev_string - reverse a string
 *
 * @s: char to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int c = 0, b, e;
	char string;

	while (s[c] != '\0')
	{
		c++;
	}
	e = --c;
	for (b = 0; e >= 0 && b < e; b++, e--)
	{
		string = s[b];
		s[b] = s[e];
		s[e] = string;
	}
}
