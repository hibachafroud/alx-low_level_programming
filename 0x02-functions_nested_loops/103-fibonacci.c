#include <stdio.h>
#include <stdbool.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *          in the Fibonacci sequence not exceeding 4000000.
 * Return: Always 0
 */

int main(void)
{
	long int fib1 = 0, fib2 = 1, next;
	float sum;

	while (true)
	{
		next = fib1 + fib2;
		if (next > 4000000)
		{
		break;
		}
		else if ((next % 2) == 0 && next < 4000000)
		{
		sum += next;
		}
		fib1 = fib2;
		fib2 = next;
	}
	printf("%.0f\n", sum);

	return (0);
}
