#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char
 * @s: char; pointer to pointer
 * @to: char; pointer
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}