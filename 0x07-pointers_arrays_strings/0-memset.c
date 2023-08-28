#include "main.h"
/**
 * _memset - fill block with value
 * @s: starting address must be filled
 * @b: value
 * @n: number of bytes changes
 *
 * Return: value of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
