#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	char *p = s;

	while (*p)
		p++;

	while (p-- > s)
		_putchar(*p);

	 _putchar('\n');
}
