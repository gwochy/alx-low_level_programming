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
	}
	while (num < 16)
	{
		putchar(55 + num);/* to return a char 59 represents 11 */
		num++;
	}
	putchar('\n');
	return (0);
}