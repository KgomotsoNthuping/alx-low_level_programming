#include "main.h"
/**
 * _puts_recursion - it is a method
 * @s: its input
 * Return: Always a 0 on its success
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
