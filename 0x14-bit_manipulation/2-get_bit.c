#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @index: index of the bit to get
 *
 * @n: the number
 *
 * Return: the index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int num_bits = 0;
	unsigned long int tmp = n;

	while (tmp > 0)
	{
		num_bits++;
		tmp = tmp >> 1;
	}

	if (index > num_bits)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
