#include <stdio.h>
#include <ctype.h>

/**
 * main - Print  all possible different combinations of two digits from 0 to 9
 * Return:  0 Always .
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);

			if (digit1 < 56 || digit2 < 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
