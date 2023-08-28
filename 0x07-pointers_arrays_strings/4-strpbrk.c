#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the given string
 *
 * @accept: the set of bytes
 *
 * Return: a pointer to the first occurence in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;


	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
		return (NULL);
}
