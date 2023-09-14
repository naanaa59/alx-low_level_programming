#include "variadic_functions.h"
/**
 * print_numbers - print numbers followed by a new line
 *
 * @seperator: the string to be printed between numbers
 *
 * @n: number of parameters
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (seperator && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);

}
