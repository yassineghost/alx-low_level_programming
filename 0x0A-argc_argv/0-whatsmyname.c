#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: number of arguement in the propmt comand
 * @argv: arguments words in the prompt comand
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
