#include "main.h"

/**
 * factorial - shows factorial number
 * @n: its factorial from
 *
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
