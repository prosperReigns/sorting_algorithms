#include "sort.h"

/**
 * bubble_sort - sorts a list of numbers in ascending order
 * @array: an array of numbers
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
    size_t i, j;

    for (i = 0; i < size - 1; i++)
    {
        /*int sort = 1;*/

        for (j = i + 1; j < size - 1 - i; j++)
        {
            if (array[j] > array[i])
                swap(&array[j], &array[i]);

            /*sort = 0;*/
            /*print_array(array, size);*/
        }
	print_array(array, size);
        /*if (sort == 1)*/
            /*break;*/
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
