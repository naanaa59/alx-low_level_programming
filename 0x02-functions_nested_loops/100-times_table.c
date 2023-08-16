#include "main.h"
/**
 *print_3spaces - prints comman and 2 spaces
 */
void print_3spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 *print_d3 - prints units
 *@dd: the given number
 */
void print_d3(int dd)
{
	int d3;

	d3 = dd % 10;
	_putchar(d3 + '0');
}
/**
 *print_d2d3 - prints tens and units
 *@dd: the given number
 */
void print_d2d3(int dd)
{
	int d2, d3;

	d2 = (dd / 10) % 10;
	d3 = dd % 10;
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(d2 + '0');
	_putchar(d3 + '0');
}
/**
 *print_d1d2d3 - prints tens and units and hundreds
 *@dd: the given number
 */
void print_d1d2d3(int dd)
{
	int d1, d2, d3;

	d1 = dd / 100;
	d2 = (dd / 10) % 10;
	d3 = dd % 10;
	_putchar(',');
	_putchar(' ');
	_putchar(d1 + '0');
	_putchar(d2 + '0');
	_putchar(d3 + '0');
}
/**
 *print_times_table - prints the 9 times tables
 *@n: the given number
 */
void print_times_table(int n)
{
	int i, j, dd;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			dd = i * j;
			if (dd < 100)
			{
				if (i == 0 && dd == 0)
				{
					print_d3(dd);
					if (j == n)
						break;
					print_3spaces();
				}
				else if (j == 0 && dd == 0)
					print_d3(dd);
				else if (dd < 10)
				{
					print_3spaces();
					print_d3(dd);
				}
				else
				{
					print_d2d3(dd);
				}
			}
			else if (dd >= 100)
			{
				print_d1d2d3(dd);
			}
		}
		_putchar('\n');
	}
}
