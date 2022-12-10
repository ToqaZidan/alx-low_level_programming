#include <stdio.h>

/**
 * main - print the alphapet lowercase reversed
 *
 * Return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
