#include "main.h"
/**
 * reverse_array - Reverses an array of integers.
 * @a: Array to be reversed.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int r;

	i = 0;
	for (i = 0; i < n--; i++)
	{
		r = a[i];
		a[i] = a[n];
		a[n] = r;
	}
}
