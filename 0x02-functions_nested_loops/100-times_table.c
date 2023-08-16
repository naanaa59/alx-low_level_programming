#include "main.h"
/**
 *print_spaces - prints comman and 2 spaces
 */
void print_spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}
/**
 *times_table - prints the 9 times tables
 */
void times_table(void)
{
	int i, j, dd, d1, d2, d3;

	for (i = 0; i < 16; i++)
	{
		for (j = 0; j < 16; j++)
		{
			dd = i * j;
			d1 = dd / 10;
			d2 = dd % 10;
			d3 = dd / 100;
			if (dd < 100)
			{
				if (i == 0 && dd == 0)
				{
					_putchar(d1 + '0');
					_putchar(d2 + '0');
					if (j == 99)
						break;
					print_spaces();
				}
				else if (j == 0 && dd == 0)
					_putchar(d2 + '0');
				else
				{
					print_spaces();
					_putchar(d1 + '0');
					_putchar(d2 + '0');
				}
			}
			else if (dd >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d3 + '0');
				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
		}
		_putchar('\n');
	}
}
