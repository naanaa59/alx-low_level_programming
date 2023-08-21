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
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: the given string
 */
void puts_half(char *str)
{
	int i, l;

	l = _strlen(str);
	for (i = l / 2; i < l; i++)
	{
		if (l % 2 == 0)
			_putchar(str[l / 2 + 1]);
		_putchar(str[i]);
	}
	_putchar('\n');
}
