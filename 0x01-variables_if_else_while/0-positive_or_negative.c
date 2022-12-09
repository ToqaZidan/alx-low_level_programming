#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print random numbers and state it state
 *
 * Return: 0 (success)
 */
int main(viod)
{
	int n;

	srand(time(0));
	n = rand() - Rand_max / 2;

	if (n < 0 )
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is postive\n", n);
	return (0);
}
