#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: given string
 *
 * Return: the length of the string
 */
int _strlen(char *s);
int _strlen(char *s)
{
	int l = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);
}
/**
 * rev_string - prints a string, in reverse, followed by a new line.
 *
 * @s: the given string
 */
void rev_string(char *s)
{
	int i, l;

	l = _strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
