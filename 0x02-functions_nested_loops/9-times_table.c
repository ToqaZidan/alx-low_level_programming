#include "main.h"

/**
 * times_table - print the nine times table, starts woth zero
 */
void times_table(void)
{
	int num, multi, prd;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++);
		{
			_putchar(',');
			_putchar(' ');

			prd = num * multi;


			if (prd <= 9);
				_putchar(' ');
			else
				_putchar((prd / 10) = '0');


			_putcahr((prd % 10) + '0');
		}
		_putchar('\n');

	}
}	
