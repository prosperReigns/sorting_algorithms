#include "sort.h"
/**
 * swap - function responsible for swappind array elements
 * @a: first index
 * @b: second index
 *
 * Return: return void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - function responsible for bubble sorting
 * an array
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: return void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
