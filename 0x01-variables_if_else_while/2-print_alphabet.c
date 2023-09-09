#include <stdio.h>
#include <ctype.h>

/**
 * main - Print the alphabet in lowercase
 * Return:  0 Always .
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
	{
		putchar(tolower(alphabet));
	}
	putchar('\n');

	return (0);
}
