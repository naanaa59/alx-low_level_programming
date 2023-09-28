#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *
 * @n: the given number
 *
 * @index: index where to set
 *
 * Return: 1 if it works or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n = *n & mask;
	return (1);

}
