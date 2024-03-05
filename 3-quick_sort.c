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
    int i, pivot, j, temp1, temp2;

    i = low - 1;
    pivot = array[high];

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {
            i++;
            temp1 = array[i];
            array[i] = array[j];
            array[j] = temp1;
            print_array(array, high + 1);
        }
    }
  
    temp2 = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp2;
    print_array(array, high + 1);

    return (i + 1);
}