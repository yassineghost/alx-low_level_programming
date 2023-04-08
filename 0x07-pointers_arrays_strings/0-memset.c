#include "main.h"
/**
 * _memset - fills memory with constant byte
 *
 * @s: array to be chekcked
 * @b: character to be filled the memory
 * @n: int to be filled first
 *
 * Return: a pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	while (n > 0)
		c++;
	{
		s[c] = b;
		n--;
	}
	return (s);
}
