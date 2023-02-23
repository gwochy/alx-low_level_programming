#include "main.h"

/**
 * _isdigit - function that runs to check 0 through 9
 *
 * @c: variable storing the values
 * Return: Always 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
