#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - returns the last digitof a number  and evaluates it
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d", &n);
	ldigit = n % 10;
	if (ldigit == 0)
		printf("Last digit of %d is %d and is zero\n", n, ldigit);
	else if (ldigit < 6 && ldigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	else
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	return (0);
}
