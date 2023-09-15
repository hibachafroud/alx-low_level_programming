#include <stdio.h>
#include <math.h>
/**
 * main -   finds and prints the largest prime factor
 *          of the number 612852475143
 *
 * Return:  0 Always .
 */

int main(void)
{
	long x, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			max = number / x;
		}
	}

	printf("%ld\n", max);

	return (0);
}
