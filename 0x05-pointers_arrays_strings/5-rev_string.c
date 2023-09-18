#include "main.h"
#include <string.h>

/**
 * rev_string - function that reverses a string.
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int i, len, len1;
	char swap;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len; i++)
	{
		swap = s[1];
		s[i] = s[len1];
		s[len1--] = swap;
	}
}
