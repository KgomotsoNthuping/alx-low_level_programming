#include "main.h"
#include <unistd.h>
/**
 * _putchar - putchar
 * @c: character
 *
 * Return: always return a 1 on success
 * otherwise -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
