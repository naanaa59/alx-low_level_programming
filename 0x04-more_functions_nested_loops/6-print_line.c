#include "main.h"
/**
 *print_line - draws a straight line in the terminal.
 *
 *@n: the given number of _
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
			continue;
		else
		_putchar('_');
	}
	_putchar('\n');
}

