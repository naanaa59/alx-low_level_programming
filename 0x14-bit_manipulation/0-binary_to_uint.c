#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the binary number
 *
 * Return: the converted value or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0;
	unsigned int dec_value = 0;
	unsigned int tmp = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			dec_value += tmp;

		tmp *= 2;
	}
	return (dec_value);

}
