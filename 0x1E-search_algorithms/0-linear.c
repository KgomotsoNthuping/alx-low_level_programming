#include "search_algos.h"

/**
 * linear_search - search for value
 *
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
