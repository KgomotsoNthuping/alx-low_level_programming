#include <stdlib.h>
#include "main.h"

/**
 * *_memset - memory filler
 * @s: memory to be filled
 * @b: copy
 * @n: copy b
 *
 * Return: points to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - memory allocated
 * @nmemb: elements
 * @size: element size
 *
 * Return: points to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
