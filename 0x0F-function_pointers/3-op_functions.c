#include "3-calc.h"

/**
 * op_add - add two integers
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: the result which is int too
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- subs two integers
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: the result which is int too
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplise  two integers
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: the result which is int too
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divise a by b
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: the result which is int too
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 *
 * @a: first int
 *
 * @b: second int
 *
 * Return: the result which is int too
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

