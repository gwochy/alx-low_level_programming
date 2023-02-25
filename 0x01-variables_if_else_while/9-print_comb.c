#include <stdio.h>

/**
 * main - hexadecimal
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(48 + num); /* to return a char, 48 represents 0 */
		num++;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
