#include "main.h"
/**
 * *leet - encodes a string into leet
 * @str: char; string, pointer to the variable
 *
 * Return: pointer to the resulting string
 */

char *leet(char *str)
{
	int i = 0, j;
	char chars;
	char rep[10] = {"aAeEoOtTlL"};
	char to_rep[5] = {"43071"};

	while (str[i] != '\0')
	{
		chars = str[i];

		for (j = 0; j < 10; ++j)
		{
			if (chars == rep[j])
			{
				str[i] = to_rep[j / 2];
			}
		}

		i++;
	}
	return (str);
}
