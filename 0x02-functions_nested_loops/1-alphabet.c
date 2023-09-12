#include "main.h"
/**
 * print_alphabet - Prints the alphabet, in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet(void)
{

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
