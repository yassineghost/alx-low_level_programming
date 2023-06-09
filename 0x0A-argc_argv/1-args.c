#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the num of the args
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
