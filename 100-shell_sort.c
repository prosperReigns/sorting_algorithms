#include "sort.h"
/**
 * shell_sort - function dealing with shell sorting an array
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: return void
 */
void shell_sort(int *array, size_t size)
{
	int value;
	size_t i, j, h = 1;

	while(h < size)
	{
		h = (h * 3) + 1;
	}
	h /= 3; /*because the h has to be less than array size*/
	while(h > 0)
	{
		for(i = h; i < size; i++)
		{
			value = array[i];
			j = i;
			while(j >= h && array[j - h] > value)
			{
				array[j] = array[j - h];
				j = j - h;
			}
			array[j] = value;
		}
		print_array(array, size);
		h /= 3;
	}
}
