#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
