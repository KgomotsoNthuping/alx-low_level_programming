#include "main.h"

/**
 * clear_bit - value of a bit to 0
 * @n: num
 * @index: index
 *
 * Return: 1 working, -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
