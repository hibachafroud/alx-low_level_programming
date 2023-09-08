#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print "number is positive " if n >0
 *              "number is negative " if n <0
 *		        "number is zero" if n == 0
 * Return:  0 Always .
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	    printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	    printf("%d is negative\n", n);
	}
	else
	{
	    printf("%d is zero\n", n);
	}

	return (0);
}
