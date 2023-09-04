#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 *
 * @str: the given string to copy
 *
 * Return: a pointer to the duplicata
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;
	int size = 0;

	for (i = 0; str[i]; i++)
		size++;
	s = malloc(sizeof(char) * size);
	if (s == NULL || size == 0)
		return (NULL);
	for (j = 0; j < size; j++)
		s[j] = str[j];
	return (s);
}
