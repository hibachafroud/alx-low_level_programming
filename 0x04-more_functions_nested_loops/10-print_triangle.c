#include "main.h"
/**
 * print_triangle - prints a triangle on the terminal
 * @size:size is the number of times the character # should be printed
 *
 * if size is 0 or less, the function should only print a '\n'
 * the diagonal should end with a '\n'
 *
 * Return: void ;
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(32);
			}

			for (k = 1; k <= i; k++)
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
