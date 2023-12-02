#include "main.h"
/**
 * _puts - string, and then new line to stdout
 * @str: print string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
