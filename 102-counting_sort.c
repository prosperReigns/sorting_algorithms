#include "sort.h"
/**
 * determine - determine what to store in array
 * count_array
 * @array: the array to be sorted
 * @count_array: the count array
 * size: size of the array to be sorted
 * @i: index of array
 * @value: value at index i
 */
void determine(int *array, int *count_array, size_t size, size_t i, int value)
{
	size_t j;

	for (j = i; j < size; j++)
	{
		if (value == array[j])
			count_array[value] += 1;
	}
}
/**
 * counting_sort - sorting array using counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: return void
 */
void counting_sort(int *array, size_t size)
{
	int value, k;
	size_t i, max = array[0];
	int *count_array = NULL, *new = NULL;

	for (i = 1; i < size; i++)
	{
		if ((int)max < array[i])
			max = array[i];
	}
	count_array = malloc(sizeof(int) * (max + 1));
	new = malloc(sizeof(int) * size);
	if (count_array == NULL || new == NULL)
		return;
<<<<<<< HEAD
	for (i = 0; i <= max + 1; i++)
=======
	for (i = 0; i < max + 1; i++)
>>>>>>> e2baa12934bf67f03348b79cde4c33cecf3d4079
		count_array[i] = 0;
	for (i = 0; i < size; i++)
	{
		value = array[i];
<<<<<<< HEAD
		if (value == 0 && count_array[value] == 0)
			determine(array, count_array, size, i, value);
		else if (count_array[value] == 0 && value != 0)
			determine(array, count_array, size, i, value);
	}
	for (i = 1; i < max + 2; i++)
=======
		if (value == 0 && zone == 0)
		{
			for(j = i + 1; j < size; j++)
			{
				if (array[j] == value)
					count++;
			}
			count_array[value] = count + 1;
			count = 0;
			zone++;
		}
		else if (count_array[value] == 0 && value != 0 && value != (int)max)
		{
			for(j = i + 1; j < size; j++)
			{
				if (array[j] == value)
					count++;
			}
			count_array[value] = count + 1;
			count = 0;
		}
		else if (count_array[value] == 0 && value == (int)max)
		{
			for(j = i + 1; j < size; j++)
			{
				if (array[j] == value)
					count++;
			}
			count_array[value] = count + 1;
			count = 0;
		}
	}
	for (i = 1; i < max - 1; i++)
>>>>>>> e2baa12934bf67f03348b79cde4c33cecf3d4079
		count_array[i] += count_array[i - 1];
	print_array(count_array, max + 1);
	for (k = size - 1; k >= 0; k--)
	{
		new[count_array[array[k]] - 1] = array[k];
		count_array[array[k]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = new[i];
	free(new);
	free(count_array);
	count_array = NULL;
	new = NULL;
}
