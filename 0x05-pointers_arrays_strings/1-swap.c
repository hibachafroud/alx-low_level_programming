#include "main.h"
/**
 * reset_to_98 - swaps the values of two integers
 * @a: int; pointer to the first variable
 * @b: int; pointer to the second variable
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
