#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * @n: printed numbers
 * @cnt: counted line
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int n, cnt = 0;

	for (cnt = 0; cnt <= 9; cnt++)
	{
		if
			(n > 9)
				_putchar((n / 10) + '0');
		putchar((n % 10) + '0');
	}
	_putchar('\n');
}
