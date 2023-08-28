#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 *
 * @s: the given array
 *
 * @b: the constant byte
 *
 * @n: the first n bytes to fill
 *
 * Return: the given s modified by the function
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
