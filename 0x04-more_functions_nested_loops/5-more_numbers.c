#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */

void more_numbers(void)
{
	int n, cnt;

	for (cnt = 0; cnt <= 9; cnt++)
	{
		if
			(n > 9)
				_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
