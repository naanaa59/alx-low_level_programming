#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: character to check
 * Return: 1 if c lowercase and 0 otherwise
 */

int _islower(int c)
{
	int r = 0;

	if (c >= 65 && c <= 90)
	{
		r = 0;
	}
	else if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	return (r);
}
