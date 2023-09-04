#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to the string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;
	int l1 = 0;
	int l2 = 0;

	if (s1 != NULL)
	{
		for (i = 0; s1[i]; i++)
			l1++;
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j]; j++)
			l2++;
	}
	s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		s[i] = s1[i];
	for (i = l1; i < l1 + l2; i++)
		s[i] = s2[i - l1];
	s[i] = '\0';
	return (s);
}
