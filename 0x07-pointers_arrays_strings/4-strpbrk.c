#include "main.h"
/**
 * _strpbrk – enter to the point
 * @s: its input
 * @accept: its input
 * Return: always at 0 on success
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
