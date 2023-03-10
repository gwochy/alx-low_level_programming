#include "main.h"

/**
 * is_prime_number - Prime number
 *
 * @n: number to be determined
 * @d: divisor to check
 * Return: Both prime and non prime
 */

int is_prime_number(int n)
{
	int d = 2;

	if ((n % d == 0) || (n != 2))
	{
		return (0);
		d += 1;
		return (is_prime_number(n / d));
	}
	return (0);

}
