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
	int strlen, strlen1;

	strlen = 0;

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	if (strlen % 2 != 0)
	{
		strlen1 = (strlen - 1) / 2;
	}
	else
	{
		strlen1 = strlen / 2;
	}

	while (strlen1 < strlen)
	{
		strlen1++;
		_putchar(str[strlen1 - 1]);
	}
	_putchar('\n');
}
