#include "main.h"
/**
 * print_square -  prints a square line on the terminal
 * @size: size is the number of times
 *          the character # should be printed
 *
 * if n is 0 or less, the function should only print a '\n'
 * the diagonal should end with a '\n'
 *
 * Return: void ;
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
	   _putchar('\n');
	}
}
