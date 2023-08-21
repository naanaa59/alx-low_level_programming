#include "main.h"
#include <stddef.h>
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

	l = _strlen(s);
	for (i = l - 1; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
