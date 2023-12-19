#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers in ascending order
 *		using the Selection sort algorithm.
 *
 * @array: The array to sort.
 * @size: The size of array.
 */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, k;

	if (array == NULL || size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		for (i = size - 1, k = j + 1; i > j; i--)
		{
			if (aray[i] < array[k])
			{
				k = i;
			}
		}
		if (array[j] > array[k])
		{
			tmp = array[j];
			array[j] = array[k];
			array[k] = tmp;
			print_array(array, size);
		}
	}
}
