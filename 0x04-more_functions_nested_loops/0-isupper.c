#include "main.h"
/**
 * _isupper - function that checks for capital letter
 *
 * @c: Any character input
 * Return: Always 1
 */

int _isupper(int c)
{
	/* checking upper case */
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
