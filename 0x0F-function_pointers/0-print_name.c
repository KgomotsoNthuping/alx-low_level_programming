#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: adds a name string
 * @f: points to the function
 * Return: name
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
