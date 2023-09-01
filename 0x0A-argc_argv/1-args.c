#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed through
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always a 0 on its success
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
