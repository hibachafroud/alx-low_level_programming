#include <stdio.h>
#include <ctype.h>

/**
 * main - Print the alphabet in lowercase then uppercase
 * Return:  0 Always .
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
	{
		putchar(tolower(alphabet));
	}
	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
