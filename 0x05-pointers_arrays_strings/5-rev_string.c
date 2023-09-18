#include "main.h"
/**
 * rev_string -  reverses a string
 * @s: char; pointer to the variable
 *
 * Return: void
 */

void rev_string(char *s)
{
	int strlen, i;
	char tmp;

	strlen = 0;

	while (s[strlen] != '\0')
	{
		strlen++;
	}
	for (i = 0; i < strlen - 1; i++)
	{
		tmp = s[i];
		s[i] = s[strlen - 1];
		s[strlen - 1] = tmp;
		strlen--;
	}
}
