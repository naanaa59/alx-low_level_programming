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
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: the given string
 */
void print_rev(char *s)
{
	int i, l;
	char r_str[100];

	l = _strlen(s);
	for (i = 0; i < l ; i++)
	{
		r_str[l - 1 - i] = s[i];
	}
	for (i = 0; r_str[i] != 0; i++)
	{
		_putchar(r_str[i]);
	}

	_putchar('\n');
}
