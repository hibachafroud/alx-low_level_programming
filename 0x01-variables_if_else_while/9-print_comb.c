#include <stdio.h>
#include <ctype.h>

/**
 * main - Print numbers from 0 to 9 numbers seperated by ', '
 * Return:  0 Always .
 */

int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 57)
		{
		putchar(number);
		putchar(',');
		putchar(' ');
		}
		else
		{
		putchar(number);
		}
	}

	return (0);
}
