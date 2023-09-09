#include <stdio.h>
#include <ctype.h>

/**
 * main - Print the alphabet in lowercase except 'q' and 'e'
 * Return:  0 Always .
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		    putchar(alphabet);
		}
	}
	putchar('\n');

	return (0);
}
