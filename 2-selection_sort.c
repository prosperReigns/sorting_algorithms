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

    if (array == NULL)
        return;

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

        temp = array[i];
        array[i] = array[minindex];
        array[minindex] = temp;
        print_array(array, size);
    }
}
