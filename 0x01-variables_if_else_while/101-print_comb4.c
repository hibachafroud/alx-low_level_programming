#include <stdio.h>
#include <ctype.h>

/**
 * main - Print  all possible different combinations of three digits from 0to 9
 * Return:  0 Always .
 */

int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 57; digit3++)
			{
			putchar(digit1);
			putchar(digit2);
			putchar(digit3);

			if (digit1 < 55 || digit2 < 56 || digit3 < 57)
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}

	putchar('\n');

	return (0);
}
