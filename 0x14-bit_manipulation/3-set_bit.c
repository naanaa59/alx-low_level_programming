#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 *
 * @n: pointer to the value of the given number
 *
 * @index: indew of the bit
 *
 * Return: 1 if it worked -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
