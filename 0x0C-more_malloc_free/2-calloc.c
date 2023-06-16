#include "main.h"
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
	int c =  0;

	for (; n > 0; c++)
	{
		s[c] = b;
		n--;
	}
	return (s);
}


/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);
	return (p);
}
