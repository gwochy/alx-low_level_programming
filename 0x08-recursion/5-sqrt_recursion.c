#include "main.h"

int perfect_sq(int n, int st);
/**
 *_sqrt_recursion - Function to return a square root
 *
 *@n: The squared number to be rooted
 * Return: Square root returned of ps
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (perfect_sq(n, 0));
}

/**
 * perfect_sq - Recursing to return a perfect square root
 *
 * @n: Perfect square number
 * @st: Iteration to get a perfect square
 * Return: Square root returned of ps
 */

int perfect_sq(int n, int st)
{
	if ((n % 10 == 2) || (n % 10 == 3) || (n % 10 == 7) || (n % 10 == 8))
		return (-1);
	if (st * st == n)
		return (st);
	return (perfect_sq(n, st + 1));
}
