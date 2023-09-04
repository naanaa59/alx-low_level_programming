#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and
 * initializes it with a specific char
 *
 * @size: the size of the array
 *
 * @c: the character
 *
 * Return: a pointer to the array of char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		s[i] = '\0';
	}
	return (s);
}
