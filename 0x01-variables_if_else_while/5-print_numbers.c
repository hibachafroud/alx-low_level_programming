#include <stdio.h>
#include <ctype.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 * Return:  0 Always .
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");

	return (0);
}
