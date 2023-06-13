#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *n;
	int j = 0;
	int i;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	n = malloc(sizeof(char) * (i + 1));
	if (n == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		n[j] = str[j];

	return (n);
}
