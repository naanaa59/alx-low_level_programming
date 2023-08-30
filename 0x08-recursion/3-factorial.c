#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the given number
 *
 * Return: the facorial
 */
int factorial(int n)
{

	if (n < 0)
	{
		n = -1;
		return (n);
	}
	else if (n == 0)
	{
		n = 1;
		return (n);
	}
	else
	{
	n = n * factorial(n - 1);
	return (n);
	}
}
