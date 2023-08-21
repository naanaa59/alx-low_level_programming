#include "main.h"
/**
 * _strcpy - opies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer
 *
 * @dest: the destination
 *
 * @src: the source
 *
 * Return: an array of strings
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
