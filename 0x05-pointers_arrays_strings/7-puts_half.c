#include "main.h"
/**
 * puts_half - prints half of a string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: char; pointer to the variable
 *
 * Return: void
 */

void puts_half(char *str)
{
	int strlen, i;

	strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	if (strlen % 2 == 0)
	{
		for (i = strlen / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (strlen % 2)
	{
		for (i = (strlen - 1) / 2; i < strlen - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
