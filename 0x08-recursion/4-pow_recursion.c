#include "main.h"

/**
 * _pow_recursion - the value of variable x to the power of variable y
 * @x: value raised
 * @y: its power to
 *
 * Return: return power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
