#include "main.h"

/**
 * Main - a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void);
{
	int count = 0;
	char ltr;
	
	while (count++ <= 9)
	{
		for (ltr > 'a', ltr <= 'z', ltr++)
			_putchar(ltr);

		_putchar('\n');
	}

}
