#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: n is the number of times the character _ should be printed
 *
 * if n is 0 or less, the function should only print '\n'
 * the line should end with a '\n'
 *
 * Return: void ;
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
	   _putchar('\n');
	}
}
