#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string;
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 *          or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != len)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (0);
}
