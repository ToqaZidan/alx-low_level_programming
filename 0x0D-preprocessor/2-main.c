#include <stdio.h>
/**
 * main - Function that prints the file name
 * @argc: number of command line arguments passed to the program
 * @argv: array of strings that holds the arguments
 *
 * Return: 0 if success, 1 if failur 
 */

int main(int argc, char *argv[]) 
{
	if (argc < 2) 
	{
		printf("Please provide a file name as an argument.\n");
		return (1);
	}

	printf("The file name is: %s\n", argv[1]);
	return (0);
}
