#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output
 * @c: The character to be written.
 *
 * Return: On success, 1 is returned. On error, -1 is returned, and
 * errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, -1); /*Write the character 'c' to file descriptor 1 (stdout)*/
}
