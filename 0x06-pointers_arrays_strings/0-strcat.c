#include "main.h"

/**
 * *_strcat - Function that concatenates two strings
 *
 * @dest: string(s1) to be concatenated on with s2
 * @src: string(s2) to be appended to s1(1st string)
 * dest - Concatenated string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int d;
	int s;

/*	for (i = 0; i <= src[i]; i++) adding src to destination */
/*	{	*/
/*	dest[i] + [i] = src[i];	*/
/*	i++;	*/
/*	j++;	*/
/*	}	*/
	for (d = 0; *(dest + d) != '\0'; d++)
		;

	for (s = 0; *(src + s) != '\0'; s++, d++)
	{
		*(dest + d) = *(src + s);
	}

	*(dest + d) = '\0';
	return (dest);
}
