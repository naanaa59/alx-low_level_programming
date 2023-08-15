#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int d4 = 0;

	while (d4 <= 2)
	{
		int d3 = 0;

		while (d3 <= 9)
		{
			int d2 = 0;

			while (d2 <= 5)
			{
				int d1 = 0;

				while (d1 <= 9)
				{
					if (d1 ==2  && d2 < 4 && d3 == 0 && d4 == 0)
					{
						_putchar('\n');
						_putchar('\n');
						_putchar('\n');
						_putchar('\n');
						_putchar('\n');
						_putchar('\n');
					}
					else
					{
					_putchar(d4 + '0');
					_putchar(d3 + '0');
					_putchar(':');
					_putchar(d2 + '0');
					_putchar(d1 + '0');
					_putchar('\n');
					}
					d1++;
				}
				d2++;
			}
			d3++;
		}
		d4++;
	}
}
