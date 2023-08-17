#include "main.h"

/**
 *_isupper - checks if c is uppercase
 *
 *@c: the given character
 *
 *Return: 1 if c uppercase / 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
