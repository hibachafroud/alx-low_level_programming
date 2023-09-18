#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char; pointer to the variable
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
