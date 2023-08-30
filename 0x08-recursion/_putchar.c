#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to the stdout
 * @c: printer
 *
 * Return: returns a 1 on success 
 * When error, -1 gets back
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
