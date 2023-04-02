#include "main.h"
/**
 * _strlen - chacks the length of a string
 *
 * @s: char to be checked
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
		len++;
	return (len);
}
