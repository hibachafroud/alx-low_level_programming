#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 *                          of a square matrix of integers
 * @a: aaray of int;
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = size - 1;
	int sum_d1 = 0;
	int sum_d2 = 0;

	while (i <= (size * size))
	{
		sum_d1 += a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum_d2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum_d1, sum_d2);
}
