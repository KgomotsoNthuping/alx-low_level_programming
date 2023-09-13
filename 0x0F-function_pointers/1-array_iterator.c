#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - array element
 * @array: array
 * @size: element size
 * @action: points to print
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
