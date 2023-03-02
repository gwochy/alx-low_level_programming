#include "main.h"

/**
 **_strncpy - Function that makes a copy of n xters to the destination
 *
 *@dest: the 1st string onto which is appended
 *@src: the 2nd string that is appended onto the 1st string
 *@n: Number of characters to be appended
 *Return: Concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d;

	for (d = 0; d < n && *(src + d) != '\0'; d++)
		*(dest + d) = *(src + d);
	for ( ; d < n; d++)
		*(dest + d) = '\0';

	return (dest);
}
