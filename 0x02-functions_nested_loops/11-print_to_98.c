#include "main.h"
/**
 *pr_digit - prints any int
 *Description: print any int
 *@n: int
 */
void pr_digit(int n)
{
	int d1, d2, d3, n_abs;

	n_abs = n * -1;
	if (n > 9)
	{
		d1 = n / 100;
		d2 =  ((n % 100) / 10);
		d3 = n % 10;
		if (n > 99)
		{
			_putchar(d1 + '0');
		}
		_putchar(d2 + '0');
		_putchar(d3 + '0');
	}
	else if (n <= 9 && n >= 0)
		_putchar(n + '0');
	else if (n >= -9 && n < 0)
	{
		_putchar('-');
		_putchar(n_abs + '0');
	}
	else if (n < -9)
	{
		d1 = n_abs / 100;
		d2 = ((n_abs % 100) / 10);
		d3 = n_abs % 10;
		_putchar('-');
		if (n < -99)
		{
			_putchar(d1 + '0');
		}
		_putchar(d2 + '0');
		_putchar(d3 + '0');
	}
}
/**
  *print_to_98 - prints from n to 98
  *
  *@n: int
  */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			break;
		}
		else
		{
			pr_digit(n);
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	while (n >= 98)
	{
		pr_digit(n);
		if (n == 98)
		{
			break;
		}
			_putchar(',');
			_putchar(' ');
		n--;
	}
	_putchar ('\n');
}
