#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copy to a new memory space locatio
 *
 * @str: a char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int c = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; c < size; c++)
			m[c] = str[c];
	}
	return (m);
}
