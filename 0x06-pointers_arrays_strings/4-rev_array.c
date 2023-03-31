#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - print array in reverse
 * @a: array of integers to reverse
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i = n, *arr = malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
		arr[n - 1 - i] = a[i];

	for (i = 0; i < n; i++)
		a[i] = arr[i];
}
