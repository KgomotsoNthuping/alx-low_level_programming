#include "function_pointers.h"
#include <unistd.h>
/**
 * _putchar - writes n to stdout
 * @n: printing
 *
 * Return: success 1.
 * When fault, -1 is returned.
 */
int _putchar(char n)
{
        return (write(1, &c, 1));
}
