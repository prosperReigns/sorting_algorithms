#include "sort.h"

/**
 * selection_sort - sorts a list of number in ascending order
 * @array: an array of numbers
 * @size: size of the array
 * 
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j;
    int minindex;

    if (size < 2 || array == NULL)
        return;

    for (i = 0; i < size - 1; i++)
    {
        minindex = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[minindex])
            {
                minindex = j;
            }
            else
            {
                minindex = minindex;
            }
        }

        if (array[i] != minindex)
        {
            selection_swap(&array[i], &array[minindex]);
            print_array(array, size);
        }
    }
}

/**
 * insertion_swap - swaps two values
 * @a: first value to swap
 * @b: second value to swap
*/

void selection_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}