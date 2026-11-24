#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements of the array to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
