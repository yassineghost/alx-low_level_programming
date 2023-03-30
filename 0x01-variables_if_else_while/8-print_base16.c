#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	for (i = 48; i <= 57; i++)
	{
		putchar (i);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
