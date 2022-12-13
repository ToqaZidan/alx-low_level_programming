#include "main.h"

/**
 * _isalpha - checks for lowercase character.
 *
 *@c: the lettr to be checked
 *
 * Return: 1 if lowercase or uppercase character otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')||
		(c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
