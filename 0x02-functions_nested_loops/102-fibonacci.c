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

	while (count < 50)
	{
		next = fib1 + fib2;
	    printf("%d, ", next);
	    fib1 = fib2;
	    fib2 = next;
	    count++;
	}
	printf("\n");
	return (0);
}
