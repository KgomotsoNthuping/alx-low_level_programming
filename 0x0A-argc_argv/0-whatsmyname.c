#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always a 0 on its success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
