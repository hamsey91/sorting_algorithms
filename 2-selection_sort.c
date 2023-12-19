#include "sort.h"

/**
 * int_swap - Swap two integers in an array.
 * @x: The first integer.
 * @y: The second integer.
 */
void int_swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Function that sort an array of integers in ascending order
 *		using the selection sort algorithm.
 * @array: Array of integers to sort.
 * @size: Array size.
 */
void selection_sort(int *array, size_t size)
{
	int *num;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		num = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < *num)
				num = array + j;
		}
		if ((array + i) != num)
		{
			int_swap(array + i, num);
			print_array(array, size);
		}
	}
}
