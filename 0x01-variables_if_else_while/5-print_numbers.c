#include <stdio.h>

/**
 * main - Prints single digits from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0;

	while (num < 10)
		printf("%d", num++);
	printf("\n");
	return (0);
}
