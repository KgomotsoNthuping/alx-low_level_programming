#include "main.h"
/**
 * swap_int - swaps integers
 * @a: swap integer
 * @b: swap integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
