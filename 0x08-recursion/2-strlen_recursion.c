#include "main.h"
/**
 * _strlen_recursion - returns the lenght of a string
 *
 * @s: the string to be calculated
 *
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
