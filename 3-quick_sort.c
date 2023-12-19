#include "sort.h"

/**
 * int_swap - Swap two integers in an array.
 *
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
 * lomuto_partition - Take the last element (pivot) and arrange the other
 *		elements around it.
 *
 * @array: Array to be arrage..
 * @size: Array size..
 * @low: First index of the array.
 * @high: Last index of the array .
 *
 * Return: Partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
	int i, j, *pivot;

	pivot = array + high;
	for (i = j = low; j < high; j++)
	{
		if (array[j] < *pivot)
		{
			if (i < j)
			{
				int_swap(array + j, array + i);
				print_array(array, size);
			}
			i++;
		}
	}

	if (array[i] > *pivot)
	{
		int_swap(array + i, pivot);
		print_array(array, size);
	}

	return (i);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 *
 * @array: Array to be sort.
 * @size: Array size.
 * @low: First index of the array partition.
 * @high: Last index of the array partition.
 */
void lomuto_sort(int *array, size_t size, int low, int high)
{
	int partition;

	if (high - low > 0)
	{
		partition = lomuto_partition(array, size, low, high);
		lomuto_sort(array, size, low, partition - 1);
		lomuto_sort(array, size, partition + 1, high);
	}
}

/**
 * quick_sort - Function that sorts an array of integers in ascending order
 *		using the quicksort algorithm.
 *
 * @array: Array to be sort.
 * @size: Array size.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
