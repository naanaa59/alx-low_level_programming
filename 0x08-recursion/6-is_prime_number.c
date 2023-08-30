#include <stdio.h>
/**
 * is_prime_number_helper - help prime num
 *
 * @n: the num
 *
 * @divisor: div
 *
 * Return: res
 */

int is_prime_number_helper(int n, int divisor)
{
	if (divisor <= 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, divisor - 1));
}
/**
 * is_prime_number - checks if num is prime
 *
 * @n: the given num
 *
 * Return: 0 if false , 1 if true
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, n - 1));
}
