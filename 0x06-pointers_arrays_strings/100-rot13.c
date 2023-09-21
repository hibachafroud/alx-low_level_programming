#include "main.h"
/**
 * *rot13 - encodes a string using rot13
 * @str: char; string, pointer to the variable
 *
 * Return: pointer to the resulting string
 */

char *rot13(char *str)
{
	char *input, *output;
	int i, j;

	input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;

	while (str[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
