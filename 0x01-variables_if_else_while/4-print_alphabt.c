#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c == 101 || c == 113)
		{
			c++;
		}
		putchar(c);
	}

	putchar(10);
	return (0);
}
