#include "variadic_functions.h"
/**
 * p_char - Prints a character
 * @args: character to print (from va_list)
 *
 * Return: void
 */

void p_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * p_int - Prints an integer
 * @args: integer to print (from va_list)
 *
 * Return: void
 */

void p_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * p_float - Prints a float number
 * @args: number to print (from va_list)
 *
 * Return: void
 */

void p_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * p_str - Prints a string
 * @args: string to print (from va_list)
 *
 * Return: void
 */

void p_str(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str == NULL ? "(nil)" : str);
}

/**
 * print_all - prints anything
 *
 * @format: the type of the thing to print
 *
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	va_list args;

	print_struct arr[] = {
		{'c', p_char},
		{'i', p_int},
		{'f', p_float},
		{'s', p_str},
	};

	va_start(args, format);

	i = 0;

	while (format && format[i])
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == arr[j].c)
			{
				arr[j].f(args);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);

}
