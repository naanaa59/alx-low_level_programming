#include "main.h"
/**
 *print_1space - prints comman and 2 spaces
 */
void print_1space(void)
{
	_putchar(',');
	_putchar(' ');
}
/**
 *print_2spaces - prints comman and 2 spaces
 */
void print_2spaces(void)
{
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
}
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
 *print_times_table - prints the 9 times tables
 *@n: the given number
 */
void print_times_table(int n)
{
	int i, j, dd, d1, d2, d3;

	if (n > 15 || n < 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				dd = i * j;
				d1 = dd / 100;
				d2 = (dd / 10) % 10;
				d3 = dd % 10;
				if (dd < 100)
				{
					if (i == 0 && dd == 0)
					{
						_putchar(d3 + '0');
						if (j == n)
							break;
						print_3spaces();
					}
					else if (j == 0 && dd == 0)
						_putchar(d3 + '0');
					else if (dd < 10)
					{
						print_3spaces();
						_putchar(d3 + '0');
					}
					else
					{
						print_2spaces();
						_putchar(d2 + '0');
						_putchar(d3 + '0');
					}
				}
				else if (dd >= 100)
				{
					print_1space();
					_putchar(d1 + '0');
					_putchar(d2 + '0');
					_putchar(d3 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
