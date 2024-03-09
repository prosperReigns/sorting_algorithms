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

    if (size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        int temp, minindex = i;

        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[minindex])
                minindex = j;
        }

        swap(array[i], array[minindex])
        print_array(array, size);
    }
}
