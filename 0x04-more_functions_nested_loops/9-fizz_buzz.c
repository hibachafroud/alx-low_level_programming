#include <stdio.h>
/**
 * main -  prints the numbers from 1 to 100
 *  for multiples of 3 print Fizz.
 *  for the multiples of 5 print Buzz.
 *  for numbers of both multiples 3 and 5 print FizzBuzz.
 *
 * Return:  0 Always .
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
		    printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
	}

	return (0);
}
