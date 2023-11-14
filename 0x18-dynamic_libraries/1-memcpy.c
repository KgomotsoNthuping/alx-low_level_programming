#include "main.h"
/**
 *_memcpy - function copies area
 *@dest: memory gets to be stored
 *@src: memory that has been copied
 *@n: it is the number a byte has
 *
 *Return: returns the copied memory where bytes have changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
