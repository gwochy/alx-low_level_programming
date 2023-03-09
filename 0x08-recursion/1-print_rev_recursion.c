#include "main.h"

/**
 * _print_rev_recursion - Print a reversed string
 *
 * @s: string to be reversed
 * Return: reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*(s) != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*(s));
	}
}
