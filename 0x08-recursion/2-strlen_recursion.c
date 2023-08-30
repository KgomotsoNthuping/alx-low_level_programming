#include "main.h"
/**
 * _strlen_recursion - shows length of the string
 * @s: string that gets measured as program runs
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
