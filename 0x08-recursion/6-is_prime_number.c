#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number – checks if integer is a prime number
 * @n: number to be checked
 *
 * Return: return 1 and 0 if n is and not a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if number is loops in prime
 * @n: number to be checked
 * @i: the iteration
 *
 * Return: return 1 and 0 if n is and not a prime number
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
