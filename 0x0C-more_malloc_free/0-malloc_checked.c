#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: num of bytes tp allocate
 *
 * Return: a ptr to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *c = malloc(b);

	if (c == 0)
		exit(98);
	return (c);
}
