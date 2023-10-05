#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a = 0, b = 0, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	str = malloc(sizeof(char) * a + b + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	while (s2[k] != '\0')
	{
		str[j] = s2[k];
		j++;
		k++;
	}
	str[j] = '\0';
	return (str);
}
