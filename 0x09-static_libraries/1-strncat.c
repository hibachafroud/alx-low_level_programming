#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: char; string, pointer to the variable to be concatenated
 * @src: char; string, pointer to the variable
 * @n: int;  most n bytes used from src
 *
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (len2 = 0 ; len2 < n && src[len2] != '\0' ; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
	dest[len1 + len2] = '\0';

	return (dest);
}
