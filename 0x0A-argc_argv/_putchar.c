#include <stdio.h>
#include "main.h"

/**
 * _putchar - sends c to stdout
 * @c:printer
 *
 * Return: return 1 on its success
 * when there is an error -1 is returned 
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
