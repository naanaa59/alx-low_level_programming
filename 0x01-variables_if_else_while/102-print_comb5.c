#include <stdio.h>
/**
 * main - Display two of two-digits
 * Return: 0
 */
int main(void)
{
	int d1;
	int d2;

	d1 = 0;
	while (d1 <= 99)
	{
		d2 = 0;
		while (d2 <= 99)
		{
			if (d1 < d2 && d1 == d2)
			{
				putchar((d1 / 10) + '0');
				putchar((d1 % 10) + '0');
				putchar(' ');
				putchar((d2 / 10) + '0');
				putchar((d2 % 10) + '0');
				if (d1 == 98 && d2 == 99)
					break;
				putchar(',');
				putchar(' ');
			}
			d1++;
		}
		d2++;
	}
	putchar('\n');
	return (0);
}
