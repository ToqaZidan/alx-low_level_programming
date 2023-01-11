#include <stdio.h>
#include "main.h"

/**
 * main - function that print the name of the file
 * @argc: count argument
 * @argv: argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
