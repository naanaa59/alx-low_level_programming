#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 49; digit2 < 58; digit2++)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
