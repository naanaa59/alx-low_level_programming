#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 122; c > 96; c--)
	{
		putchar(c);
	}

	putchar(10);
	return (0);
}
