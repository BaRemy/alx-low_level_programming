#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: Char to be checked
 * Return: 1 if c is uppercase
 * Return: 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}