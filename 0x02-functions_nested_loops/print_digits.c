#include "main.h"
/**
  *print_digit - prints the input despite of on or two digits 
  *
  *@n: the given int to print
  */

void pr_digit(int n)
{
	int d1, d2, d3, n_abs;
	
	n_abs = n * -1;
	if (n > 9)
	{
		d1 = n / 100;
		d2 =  ((n % 100)/ 10);
		d3 = n % 10;
		if (n > 99)
		{
			_putchar(d1 + '0');
		}
		_putchar(d2 + '0');
		_putchar(d3 + '0');
	}
	else if (n < 9 && n >= 0)
		_putchar(n +'0');

	else if (n >= -9 && n < 0)
	{
		_putchar('-');
		_putchar(n_abs + '0');
	}

	else if(n < -9)
	{
		d1 = n_abs / 100;
		d2 = ((n_abs % 100 ) / 10);
		d3 = n_abs % 10;
		_putchar('-');
		if ( n < -99)
		{
			_putchar(d1 + '0');
		}
		_putchar(d2 + '0');
		_putchar(d3 + '0');
	}
}
		

