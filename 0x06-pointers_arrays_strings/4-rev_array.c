#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: int; array of integers
 * @n: int; the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
