#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int digit1, digit2, mult;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		_putchar('0');

		for (digit2 = 1; digit2 < 10; digit2++)
		{
			putchar(',');
			putchar(' ');

			mult = digit1 * digit2;

			if (mult <  10)
			{
			putchar(mult + '0');
			putchar(' ');
			}
			else
			{
			putchar((mult / 10) + '0');
			putchar((mult % 10) + '0');
			}
		}
		putchar('\n');
	}
}
