#include "main.h"

/**
 **_strncat - Function that concatenates n xters to the destination
 *
 *@dest: the 1st string onto which is appended
 *@src: the 2nd string that is appended onto the 1st string
 *@n: Number of characters to be appended
 *Return: Concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	for (d = 0; *(dest + d) != '\0'; d++)
		;

	for (s = 0; s < n && *(src + s) != '\0'; s++, d++)
	{
		*(dest + d) = *(src + s);
	}

	*(dest + d) = '\0';
	return (dest);
}
