#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n is the number of times the character \ should be printed
 *
 * if n is 0 or less, the function should only print a '\n'
 * the diagonal should end with a '\n'
 *
 * Return: void ;
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	   _putchar('\n');
	}
}
