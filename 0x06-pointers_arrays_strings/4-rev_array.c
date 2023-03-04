#include "main.h"

/**
 * reverse_array - reverses the order of the array
 *
 * @n: Number of elements in an array
 *@a: Pointer to array
 * Return: returns pointer
 */

void reverse_array(int *a, int n)
{
	int i, fa, ra, temp; /* i for iteration times, fa for forward array */
/* ra for reversed array and temp for swapping purposes */
	fa = 0;
	ra = n - 1;
	for (i = 0; i < n; i++)
	while (fa < n / 2)
	{
		temp = a[ra];
		a[ra] = a[fa];
		a[fa] = temp;
		fa++;
		ra--;
	}
}
