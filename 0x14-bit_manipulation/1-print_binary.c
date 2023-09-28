#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number to convert
 *
 */
void print_binary(unsigned long int n)
{
	int i;
	int num_bits = 0;
	int bit;
	unsigned long int tmp = n;

	if (n == 0)
		_putchar('0');

	while (tmp > 0)
	{
		num_bits++;
		tmp = tmp >> 1;
	}

	for (i = num_bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar(bit + '0');
	}

}
