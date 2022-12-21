#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: This is the input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
