#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 *                  starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int count = 0;
	int next;
	int fib1 = 0, fib2 = 1;

	for (count = 0; count < 50; count++)
	{
		next = fib1 + fib2;
		if (count == 49)
			printf("%d\n", next);
		else
			printf("%d, ", next);
	    fib1 = fib2;
	    fib2 = next;
	}
	return (0);
}
