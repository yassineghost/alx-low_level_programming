#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program prints it's name
 *
 * @argc: argument's count
 * @agv: argement's vector
 *
 * Return: 0 Seccess
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
