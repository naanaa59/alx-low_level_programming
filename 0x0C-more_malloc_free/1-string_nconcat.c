#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concantenates two string
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: n bytes of s2
 *
 * Return: pointer to the memory allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j;

	if (s1 == NULL)
	{
		s = malloc(n + 1);
		if (s == NULL)
			return (NULL);
		s[0] = '\0';
	}
	else
	{
		s = malloc(strlen(s1) + n + 1);
		if (s == NULL)
			return (NULL);
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
	}
	if (s2 == NULL)
	{
		s[i] = '\0';
		return (s);
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);

}
