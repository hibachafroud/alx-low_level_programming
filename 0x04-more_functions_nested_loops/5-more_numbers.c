#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void ;
 */

void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}

		putchar('\n');

		i++;
	}
}
