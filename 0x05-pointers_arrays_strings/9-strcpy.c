#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 *              including the terminating null byte (\0),
 *              to the buffer pointed to by dest
 * @dest: int; pointer to the first variable
 * @src: int; pointer to the second variable
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int strlen, i;

	strlen = 0;

	while (src[strlen] != '\0')
	{
		strlen++;
	}

	for (i = 0; i < strlen; i++)
	{
		dest[i] = src[i];
	}

	dest[strlen] = '\0';

	return (dest);
}
