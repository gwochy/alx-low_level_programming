#include "main.h"

/**
 * factorial - Returns !n of a number n
 *
 * @n: the number to be factorised
 * Return: Factorial n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
