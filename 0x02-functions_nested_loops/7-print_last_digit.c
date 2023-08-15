#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *
 *@n: number to give
 *Return: return the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = ((n) % 10);
	int last_digit_neg;

	if (last_digit < 0)
	{
		last_digit_neg = last_digit * -1;
		_putchar(last_digit_neg + '0');
		return (last_digit_neg);
	}
	else
	{
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
