#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @seperator: the string to be printed between numbers
 *
 * @n: number of parameters
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		if (seperator == NULL)
			printf("%d", va_arg(args, int));
		else
		printf("%d%s", va_arg(args, int), seperator);
	}
	printf("%d", va_arg(args, int));
	printf("\n");
	va_end(args);

}
