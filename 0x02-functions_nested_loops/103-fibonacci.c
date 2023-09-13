#include <stdio.h>
#include <stdbool.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *          in the Fibonacci sequence
 * Return: Always 0
 */

int main(void)
{
	long int fib1 = 0, fib2 = 1, next, sum;

	while (true)
	{
		next = fib1 + fib2;
		if (next > 4000000)
		{
		break;
		}

		if ((next % 2) == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}
	printf("%ld\n", sum);
	return (0);
}
