#include "main.h"

/**
 *times_table - prints the 9 times tables
 */
void times_table(void)
{
	int i = 0, dd, d1, d2;

	while (i < 10)
	{
		int j = 0;

		while (j < 10)
		{
			dd = i * j;
			d1 = dd / 10;
			d2 = dd % 10;
			if (i == 0)
				_putchar(d2 + '0');
			else if (dd < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(d2 + '0');
			}
			else if (dd >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}



