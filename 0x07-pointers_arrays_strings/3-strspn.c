#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string; segment to return bytes from
 * @accept: char; substring
 *
 * Return:  number of bytes in the initial segment of s
 *              which consist only of bytes from accept
 */

char _strspn(char *s, char *accept)
{
	int i, j;

	int nb = 0;

	for (i = 0; s[i] ; i++)
	{
		for (j = 0; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				nb++;
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (nb);
}