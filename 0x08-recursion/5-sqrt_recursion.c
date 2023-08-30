#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - bring about the square root of a number
 * @n: calculation of the square root
 *
 * Return: the result of the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - loops to find the square root of a number
 * @n: calculation of the square root
 * @i: the iteration
 *
 * Return: the result of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
