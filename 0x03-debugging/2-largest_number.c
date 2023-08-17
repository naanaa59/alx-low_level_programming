#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number of a b c
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > b && b == c)
		largest = a;
	else if (a > c && b == c)
		largest = a;
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (b > a  && a == c)
                largest = b;
        else if (b > c && a == c)
                largest = b;
	else if (c > a && a > b && c > b)
	{
		largest = c;
	}
	else if (c > a && b == c)
		largest = c;
	else if (c > b && b ==c)
		largest = c;
	return (largest);
}
