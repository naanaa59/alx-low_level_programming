#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct formats - Sturct for each accepted format and its function
 * @c: format character
 * @f: Pointer to relevant print function
 */
typedef struct formats
{
	char c;
	void (*f)(va_list);
} print_struct;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void p_char(va_list args);
void p_int(va_list args);
void p_float(va_list args);
void p_str(va_list args);

#endif
