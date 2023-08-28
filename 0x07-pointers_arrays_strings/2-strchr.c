#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a char in a string
 *
 * @s: the given string
 *
 * @c: the char to find
 *
 * Return: a pointer to the first occurence of the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}

