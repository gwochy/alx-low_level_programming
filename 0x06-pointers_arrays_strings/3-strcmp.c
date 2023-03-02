#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: string one
 * @s2: sting two
 * Return: positive, negative or Zero
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	if (s1 < s2)
		res = -15;
	if (s1 > s2)
		res = 15;
	if (s1 == s2)
		res = 0;

	return (res);

}
