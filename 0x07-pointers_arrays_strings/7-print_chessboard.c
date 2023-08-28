#include "main.h"
/**
 * print_chessboard - enter to a point
 * @a: it is an array
 * Return: always a 0 on its success
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
