#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *
 *@n: integer
 *Return: absolute value of int
 */
int _abs(int n)
{
	int  abs;

	if (n >= 0)
		abs = n;
	else
		abs = n * -1;
	return (abs);
}

