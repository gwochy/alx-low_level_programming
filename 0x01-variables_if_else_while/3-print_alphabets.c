#include <stdio.h>

/**
 * main - Prints alphabet in lower case and prints them in UPPER case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alP;

	for (alP = 'a'; alP <= 'z'; alP++)
		putchar(alP);
	for (alP = 'A'; alP <= 'Z'; alP++)
		putchar(alP);
	putchar('\n');
	return (0);
}
