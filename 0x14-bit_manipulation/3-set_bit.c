#include "main.h"

/**
 * set_bit - value of bit at 1
 * @n: num
 * @index: index
 *
 * Return: 1 when working
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
