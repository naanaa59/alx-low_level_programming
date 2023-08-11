#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 48; digit1 < 58; digit1++)
	{
		for (digit2 = 48; digit2 < 58; digit2++)
		{
			for (digit3 = 48; digit3 < 58; digit3++)
			{
				if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3
						&& digit1 < digit2 && digit2 < digit3)
				{	putchar(digit1);
					putchar(digit2);
					putchar(digit3);
				if (digit1 < 55 && digit2 < 57 && digit3 < 58)
				{
					putchar(44);
					putchar(32);
				}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
