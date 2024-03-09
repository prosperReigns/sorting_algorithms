#include "sort.h"

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