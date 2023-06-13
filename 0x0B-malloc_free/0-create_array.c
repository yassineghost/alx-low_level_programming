#include "main.h"
#include <stdlib>

/**
 * *create_array - creates an array of chars
 *
 * @size: size of the array
 * @c: char ti initialize
 *
 * Return: NULL or a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;
	return (n);
}
