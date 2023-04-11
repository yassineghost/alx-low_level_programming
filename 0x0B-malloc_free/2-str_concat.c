#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
/**
 * str_concat - get ends of input and add together for size
 * @s1: string one to concat
 * @s2: string two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, c;
	char *m;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	m = malloc((len1 + len2) * (sizeof(char) + 1));
	if (m == 0)
		return (0);
	for (c = 0; c <= len1 + len2; c++)
	{
		if (c < len1)
			m[c] = s1[c];
		else
			m[c] = s2[c - len1];
	}
	m[c] = '\0';
	return (m);
}
