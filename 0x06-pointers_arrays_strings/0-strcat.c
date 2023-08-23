#include "main.h"
/**
 * _strcat - concatenates two strings.
 *
 * @dest: is the destination to concatenate to
 *
 * @src: it is the source to concatenate from
 *
 * Return: dest concatenated with src
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < l_src; i++)
	{
		dest[l_dest + i] = src[i];
	}
	dest[l_dest + i] = '\0';
	return (dest);
}
