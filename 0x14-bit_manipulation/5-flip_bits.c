#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip to get
 * from one number to another
 *
 * @n: first int
 *
 * @m: second int
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_xor = n ^ m;
	unsigned int c = 0;

	while (result_xor)
	{
		c += result_xor & 1;
		result_xor >>= 1;
	}
	return (c);
}
