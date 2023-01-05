#include "main.h"
int is_prime_number(int n);


/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */
int is_prime_number(int n)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_prime_number(n));
}
