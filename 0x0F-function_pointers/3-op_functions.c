#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: addition of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: subtract a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder two numbers
 * @a: number 1
 * @b: number 2
 *
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
