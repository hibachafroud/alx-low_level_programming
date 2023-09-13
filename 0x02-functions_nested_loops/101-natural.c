#include <stdio.h>
/**
 * main - computes and prints the sum of all the
 *                      multiples of 3 or 5 below 1024 (excluded)
 * Return: void
 */

int main(void)
{
	int number, sum = 0;

	while (number < 1024)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
		sum += number;
		}
		number++;
	}
	printf("%d\n", sum);
	return (0);
}
