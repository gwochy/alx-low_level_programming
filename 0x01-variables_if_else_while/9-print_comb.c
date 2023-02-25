#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar( 48 + num); /* to return a char, 48 represents 0 */
		num++;
		putchar(',');
	}
		if (num <= 9)
			putchar(48 + num);
	putchar('\n');
	return (0);
}
