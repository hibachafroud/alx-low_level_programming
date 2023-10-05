#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 *              and initializes it with a specific char
 * @size: int, size of array
 * @c: char, specific character
 *
 * Return: Null if 0 or fail or pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
