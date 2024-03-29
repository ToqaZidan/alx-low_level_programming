#include <stdio.h>
#include "function_pointers.h"
/*
 * int_index - search for an integer in array
 *
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Descreption: A function that search for an integer
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
