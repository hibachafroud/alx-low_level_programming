#include <stdio.h>
#include <ctype.h>

/**
 * main - Print numbers from 0 to 10 using putchar
 * Return:  0 Always .
 */

int main(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}
