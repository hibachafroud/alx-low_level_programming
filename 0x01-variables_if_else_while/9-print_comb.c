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
		putchar(number);
		if (number != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	return (0);
}
