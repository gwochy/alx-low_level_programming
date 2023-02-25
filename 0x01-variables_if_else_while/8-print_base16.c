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
	for (num  = 10; num < 16; num++)
		putchar(87 + num);/* to return a char 97 represents 11 */
	putchar('\n');
	return (0);
}
