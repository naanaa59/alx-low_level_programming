#include "main.h"
/**
 *print_square - draws a square line on the terminal.
 *
 *@size: the number of times the character
 */
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}


		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
