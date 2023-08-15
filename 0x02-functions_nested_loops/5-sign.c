#include "main.h"

/**
 *print_sign - prints the sign of a number
 *
 *@n: the number to check
 *
 *Return: 1 or 0 or -1 if + or 0 or - respectively
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
