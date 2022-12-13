#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
		_putchar(ltr);

	_putchar('\n');
}
