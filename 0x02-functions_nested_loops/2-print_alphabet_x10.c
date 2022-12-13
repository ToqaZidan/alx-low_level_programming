#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * followed by a new line ten times.
 *
 * @count: variable for counter
 *@ltr: letter printed
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char ltr;
	
	while (count++ <= 9)
	{
		for (ltr > 'a'; ltr <= 'z'; ltr++)
			_putchar(ltr);

		_putchar('\n');
	}
}
