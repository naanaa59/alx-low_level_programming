#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the name to print
 *
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || name[0] == '\0')
		return;
	f(name);
}
