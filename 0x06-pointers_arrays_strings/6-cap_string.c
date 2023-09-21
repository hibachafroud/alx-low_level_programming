#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: char; string, pointer to the variable
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i, j;

	char sep[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}

	return (str);
}
