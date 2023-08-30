#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the given string
 *
 * Return: length of the string in int
 *
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		s += 1;
	}
	else if (*s == '\0')
		return (l);
	l += _strlen_recursion(s);
	return (l);
}
