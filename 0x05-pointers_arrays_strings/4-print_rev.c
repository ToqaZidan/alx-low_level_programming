#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i]; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	_putchar('\n');
}

