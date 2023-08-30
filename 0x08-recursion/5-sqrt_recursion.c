#include "main.h"

/**
 * _sqrt_helper - helper function to find the square root of n
 *
 * @n: the given integer
 * @original: the original value of n
 *
 * Return: the square root if it has one, -1 if not
 */
int _sqrt_helper(int n, int original)
{
	if (n * n == original)
	{
		return (n);
	}
	else if (n * n > original)
	{
		return (_sqrt_helper(n - 1, original));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the square root of an integer
 *
 * @n: the given integer
 *
 * Return: the square root if it has one, -1 if not
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, n));

}

