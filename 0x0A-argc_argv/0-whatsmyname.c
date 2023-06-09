#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the program's name
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
