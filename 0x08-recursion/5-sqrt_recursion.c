#include "main.h"

/**
 * _sqrt_recursion - Function to return a square root
 *
 * @n: Number to be evaluated
 * Return: Square root returned of n
 */

int _sqrt_recursion(int n)
{
	int guess = 1;

	if ((n % 10 == 2) || (n % 10 == 3) || (n % 10 == 7) || (n % 10 == 8))
	{
		return (-1);
	}
	else if (n <= 0)
	{
		return (-1);
	}
	else if ((guess * guess) == n)
	{
		return (guess);
		_sqrt_recursion(guess + 1);
	}
	return (0);
}
