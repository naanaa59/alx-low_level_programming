#include "main.h"
/**
 * _strncat - concatenates two strings.
 *
 * @dest: is the destination to concatenate to
 *
 * @src: it is the source to concatenate from
 *
 * @n: number of char to concatenate from src
 *
 * Return: dest concatenated with src
 */

char *_strncat(char *dest, char *src, int n)
{
	int l_src, l_dest, i;

	for (l_src = 0; src[l_src];)
	{
		l_src++;
	}
	for (l_dest = 0; dest[l_dest];)
	{
		l_dest++;
	}
	if (n > l_src)
	{
		for (i = 0; i < l_src; i++)
		{
			dest[l_dest + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[l_dest + i] = src[i];
		}
	}
	dest[l_dest + i] = '\0';
	return (dest);

}

