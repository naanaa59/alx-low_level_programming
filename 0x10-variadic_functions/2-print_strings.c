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
	s = va_arg(args, char*);
		if (s == NULL)
			s = "(nil)";
	printf("%s", s);
	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			s = "(nil)";
		if (separator)
			printf("%s%s", separator, s);
		else
			printf("%s", s);


	}
	printf("\n");
	va_end(args);
}
