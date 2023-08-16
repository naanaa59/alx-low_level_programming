#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int dd = 0;

	while (dd <= 23)
	{
		int d4 = dd / 10;
		int d3 = dd % 10;
		int d2 = 0;

		while (d2 <= 5)
		{
			int d1 = 0;

			while (d1 <= 9)
			{
				_putchar(d4 + '0');
				_putchar(d3 + '0');
				_putchar(':');
				_putchar(d2 + '0');
				_putchar(d1 + '0');
				_putchar('\n');
				d1++;
			}
			d2++;
		}
		dd++;
	}
}

