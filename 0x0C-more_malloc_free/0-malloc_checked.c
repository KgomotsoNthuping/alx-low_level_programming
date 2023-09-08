#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - with malloc allocate
 * @b: bytes to allocate
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
