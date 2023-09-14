#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: the string that seperates the strings
 *
 * @n: number of strings to print
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i != n - 1)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
