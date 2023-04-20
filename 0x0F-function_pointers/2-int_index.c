#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: the int array
 * @size: the array size
 * @cmp: the comare function
 *
 * Return: integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c = 0;

	if (array && size && cmp)
		while (c < size)
		{
			if (cmp(array[c]))
				return (c);
			c++;
		}
	return (-1);
}
