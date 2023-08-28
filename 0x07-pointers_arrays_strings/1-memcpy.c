#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: the array to copy to
 *
 * @src: the array to copy
 *
 * @n: the number of bytes to copy
 *
 * Return: the dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
