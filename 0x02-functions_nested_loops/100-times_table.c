#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 *              If n is greater than 15 or less than 0
 *              the function should not print anything
 * @n :the number of times table
 * Return: void
 */
void print_times_table(int n)
{
	int digit1, digit2, mult;

	if (n >= 0 && n <= 15)
	{
	for (digit1 = 0; digit1 <= n; digit1++)
	{
		_putchar('0');

		for (digit2 = 1; digit2 <= n; digit2++)
		{
			_putchar(',');
			_putchar(' ');

			mult = digit1 * digit2;

			if (mult <  10 || mult < 100)
			{
			_putchar(' ');
			_putchar(' ');
			}
			if (mult < 100 && mult >= 10)
			{
			_putchar((mult / 10) + '0');
			}
			else if (mult >= 100)
			{
			_putchar((mult / 100) + '0');
			_putchar(((mult / 10)) % 10 + '0');
			}
			_putchar((mult % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
