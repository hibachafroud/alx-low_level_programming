#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: int
 *
 * Return: int; length of string
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
