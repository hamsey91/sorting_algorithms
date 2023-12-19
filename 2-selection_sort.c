#include "sort.h"

/**
 * int_swap - Swap two integers in an array.
 * @a: The first integer.
 * @b: The second integer.
 */
void int_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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
			num = (array[j] < *num) ? (array + j) : num;

		if ((array + i) != num)
		{
			int_swap(array + i, num);
			print_array(array, size);
		}
	}
}
