#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: it is a string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
