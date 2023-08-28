#include "main.h"
/**
 * _strstr - enter to a point
 * @haystack: its input
 * @needle: its input
 * Return: always a 0 on its success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
