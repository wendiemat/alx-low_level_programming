#include "main.h"

/**
 * reverse_array - reverse the array of integers
 * @a: array
 * @n: count of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++;)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
