#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print "Last digit of n is lstDigit"
 *              "and is greater than 5" if lstDigit >5
 *		        "and is 0" if lstDigit == 0
 *              "and is less than 6 and not 0" if lstDigit <6 and lstDigit!=0
 * Return:  0 Always .
 */

int main(void)
{
	int n;
	int lstDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDigit = n % 10;

	if (lstDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstDigit);
	}

	return (0);
}
