#include "sort.h"

/**
 * swap - Function that swaps two integers in an array.
 *
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */

void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Function that sorts an array of integers in ascending
 *		order using the selection sort algorithm.
 *
 * @array: The array to sort.
 * @size: Th array size.
 */

void selection_sort(int *array, size_t size)
{
	int *k;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		k = array + i;
		for (j = i + 1; j < size; j++)
			if (array[j] < *k)
				k = array + j;
			else
				k = array + i;
		if ((array + i) != k)
		{
			swap(array + i, k);
			print_array(array, size);
		}
	}
}
