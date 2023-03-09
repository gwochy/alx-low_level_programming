#include "main.h"

/**
 * _puts_recursion - Prints a string by recursion
 *
 * @s: String to be printed
 * Return: It returns s
 */

void _puts_recursion(char *s)
{
	if  (*(s) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s));
		_puts_recursion(s + 1);
	}
}
