#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 *
 * @s: the given string to print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s += 1;
	}
	else if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
