#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: char; string, pointer to the variable to be concatenated
 * @src: char; string, pointer to the variable
 * @n: int; number of characters to copy
 *
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1;

	len1 = 0;

	while (src[len1] != '\0' && len1 < n)
	{
		dest[len1] = src[len1];
		len1++;
	}

	while (len1 < n)
	{
		dest[len1] = '\0';
		len1++;
	}

	return (dest);
}
