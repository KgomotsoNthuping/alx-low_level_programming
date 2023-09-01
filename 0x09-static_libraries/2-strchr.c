#include "main.h"
/**
 * _strchr - enter to the point
 * @s: its input
 * @c: its input
 * Return: always on 0 at sucess
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
