#include "main.h"

/**
 * leet - Function that encodes letters with numbers
 *
 * @s: String to be encoded
 * Return: String (s) will be returned
 */

char *leet(char *s)
{
	int i, j;
	char sl[] = "aAeEoOtTlL";/* string for letters to be replaced */
	char sn[] = "4433007711";/* numbers to repace the specific letters */

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == sl[j])
			{
				s[i] = sn[j];
			}
		}
	}
	return (s);

}
