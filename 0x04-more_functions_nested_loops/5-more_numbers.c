#include "main.h"

/**
 *more_numbers - prints 10 times the numbers from 0 to 14 followed by a newline
 */

void more_numbers(void)
{
	int n, i, d1, d2;

	for (i = 0; i < 11; i++)
	{
		for (n = 0; n < 15; n++)
		{
			d1 = n / 10;
			d2 = n % 10;
			if (n > 9)
			{
				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
			else
				_putchar(d2 + '0');
		}
		_putchar('\n');
	}
}
