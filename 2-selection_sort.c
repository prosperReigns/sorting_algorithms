#include "sort.h"

/**
 * selection_sort - sorts a list of number in ascending order
 * @array: an array of numbers
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
<<<<<<< HEAD
	size_t i, j;
	int minindex, temp;

	for (i = 0; i < size - 1; i++)
	{
		minindex = i;
		for (j = i + 1; j < size; j++)
		{
			value = array[j];
			if (value < array[minindex])
				minindex = j;
		}
		temp = array[i];
		array[i] = array[minindex];
		array[minindex] = temp;
		print_array(array, size);
	}
=======
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
>>>>>>> e2baa12934bf67f03348b79cde4c33cecf3d4079
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