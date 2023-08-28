#include "main.h"

/**
 * set_string - makes the value pointer to a char
 * @s: pointer which points to a pointer
 * @to: pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
