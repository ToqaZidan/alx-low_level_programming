#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: 0 if successful
 */

void more_numbers(void)
{
	int i, c;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + 48);
			}
			_putchar((c % 10) + 48);
		}

		_putchar('\n');

		i++
	}
}
