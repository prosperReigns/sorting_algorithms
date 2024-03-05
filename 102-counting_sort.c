#include "sort.h"
/**
 * counting_sort - sorting array using counting sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: return void
 */
void counting_sort(int *array, size_t size)
{
	int value, k, zone = 0;
	size_t i, j, max = array[0];
	int *count_array = NULL, *new = NULL, count = 0;

	for(i = 1; i < size; i++)
	{
		if (max < (size_t)array[i])
			max = array[i];
	}
	count_array = malloc(sizeof(int) * (max + 1));
	new = malloc(sizeof(int) * size);
	if (count_array == NULL || new == NULL)
		return;
	for(i = 0; i < max + 1; i++)
		count_array[i] = 0;
	for(i = 0; i < size; i++)
	{
		value = array[i];
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
		else if(count_array[value] == 0 && value != 0 && value != (int)max)
		{
			for(j = i + 1; j < size; j++)
			{
				if (array[j] == value)
					count++;
			}
			count_array[value] = count + 1;
			count = 0;
		}
		else if(count_array[value] == 0 && value == (int)max)
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
	for(i = 1; i < max - 1; i++)
		count_array[i] += count_array[i - 1];
	print_array(count_array, max + 1);
	for(k = size - 1; k >= 0; k--)
	{
		new[count_array[array[k]] - 1] = array[k];
		count_array[array[k]]--;
	}
	for(i = 0; i < size; i++)
		array[i] = new[i];
	free(new);
	free(count_array);
	count_array = NULL;
	new = NULL;
}
