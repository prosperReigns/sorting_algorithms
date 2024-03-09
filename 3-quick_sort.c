#include "sort.h"

/**
 * quick_sort - sort an unsorted list of integers
 * @array: array to sort 
 * @size: size fo the array
*/

void quick_sort(int *array, size_t size)
{
    int low = 0;
    int high = size - 1;

    if (size < 2 || array == NULL)
        return;
   quick_sort_array(array, low, high);
}

/**
 * quick_sort_array - calles quick sort recursively
 * @array: the array itself
 * @left: starting index of subset
 * @high: ending index of subset
*/
void quick_sort_array(int *array, int low, int high)
{
     if (low < high)
    {
        int pivot = partition(array, low, high);
        quick_sort_array(array, low, pivot -1);
        quick_sort_array(array, pivot + 1, high);
    }
}

/**
 * partition - sort values in an array in ascending order
 * @array: the array itself
 * @left: starting index of subset
 * @high: ending index of subset
*/

int partition(int *array, int low, int high)
{
    int pivot, count1, count2;

    pivot = array[high];

    for (count1 = count2 = low; count2 < high - 1; count2++)
    {
        if (array[count2] < pivot)
        {
            if (count1 < count2)
            {
                swap_values(&array[count1], &array[count2]);
                print_array(array, (high + 1));
            }
            count1++;
        }
    }

    if (array[count1] > pivot)
    {
        swap_values(&array[count1], &array[high]);
        print_array(array, (high + 1));
    }
    

    return (count1);
}

void swap_values(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}