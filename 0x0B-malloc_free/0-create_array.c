#include "main.h"
#include <stdlib.h>
/**
 * create_array - assigning char c
 * @size: array size
 * @c: assigner
 * Description: assigning char c
 * Return: points to array or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
