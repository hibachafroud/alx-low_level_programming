#include <stdio.h>
#include <ctype.h>

/**
 * main - Print numbers from 0 to 10 and a from f using putchar
 * Return:  0 Always .
 */

int main(void)
{
	int number;
	char alphabet;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
