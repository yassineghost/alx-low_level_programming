#include <stdio.h>
/**
 * swap_int - swaps values
 *
 * @a: pointer to swap the value
 *
 * @b: pointer to swap the value
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
