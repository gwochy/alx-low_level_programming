#include "main.h"

/**
 * string_toupper - Function that changes lower case to upper
 *
 *@s: Pointer
 * Return: upper case
 */

char *string_toupper(char *s)
{
	int i; /* for iterations */

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{ /*  ASCII a = 97, and A = 65, z = 122 , Z = 90 */
			/* so we deduct (97 - 65 = 32) this difference to A and Z */
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
