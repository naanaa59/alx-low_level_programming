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

	if (index >= (sizeof(n) * 8))
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
