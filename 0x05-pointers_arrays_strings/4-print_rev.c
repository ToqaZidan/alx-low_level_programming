#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int len = 0;
	char *p = s;

	while (*p)
	{
		len++;
		p++;
	}

	for (int i = len - 1; i >= 0; i--)
		 putchar(s[i]);

	 putchar('\n');
}
