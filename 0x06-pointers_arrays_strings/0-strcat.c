#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: char; string, pointer to the variable to be concatenated
 * @src: char; string, pointer to the variable
 *
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
	dest[len1 + len2] = '\0';

	return (dest);
}
