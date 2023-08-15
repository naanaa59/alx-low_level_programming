#include "main.h"

/**
 *_isalpha - Returns 1 if c is a letter, lowercase or uppercase 0 otherwise
 *@c:charachter to test
 *Return: 1 or 0
 */
int _isalpha(int c)
{
	int r = 0;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		r = 1;
	else
		r = 0;
	return (r);
}
