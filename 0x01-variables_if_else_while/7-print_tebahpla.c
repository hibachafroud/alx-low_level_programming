#include <stdio.h>
#include <ctype.h>

/**
 * main - Print the alphabet from z to a
 * Return:  0 Always .
 */

int main(void)
{
	char alphabet;

	alphabet = 'Z';

	while (alphabet >= 'A')
	{
		putchar(tolower(alphabet));
		alphabet--;
	}
	putchar('\n');

	return (0);
}
