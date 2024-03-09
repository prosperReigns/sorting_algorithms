#include "sort.h"

/**
 * bubble_sort - sorts a list of numbers in ascending order
 * @array: an array of numbers
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t j;
	int sort = 0;

	if (array == NULL || size < 2)
		return;

	while (sort == 0)
	{
		sort = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				sort = 0;
				print_array(array, size);
			}
		}
		size--;
	}
}

/**
 * swap - swaps two values
 * @a: first value to swap
 * @b: second value to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
