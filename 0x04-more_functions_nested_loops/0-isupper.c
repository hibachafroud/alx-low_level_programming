#include "main.h"
/**
 * isupper - checks for uppercase character
 * @c: the character to check
 * Return: int ;1 if c is uppercase , 0 otherwise
 */

int isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}

	return (0);
}
