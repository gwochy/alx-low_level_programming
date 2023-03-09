#include "main.h"

/**
 * _pow_recursion - Exponenting number x(power y)
 *
 * @x: the base number to be powered
 * @y: power to be raised
 * Return: Exponented (Powered) x
 */

int _pow_recursion(int x, int y)
{
	int p;/*calculating the exponential*/

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		p = _pow_recursion(x, y - 1);
		return (x * p);
	}
}
