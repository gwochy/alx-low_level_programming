#include "main.h"

/**
 * _strlen_recursion - Counts the length of the string
 *
 * @s: the string in question
 *Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (*(s) != '\0')
	{
		n = _strlen_recursion(s + 1);
		return (1 + n);
	}
	return (0);
}
