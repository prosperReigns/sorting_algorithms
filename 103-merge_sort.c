#include "sort.h"

void top(int *array, size_t lb, size_t ub)
{
}
void merge_sort(int *array, size_t size)
{
	size_t ub = size, mid, lb = 0;

	if (lb < ub)
	{
		mid = size / 2;
		top(array, &lb, &(mid - 1));
		top(array, &mid, &ub);
		down(array, lb, mid - 1, ub);
	}
}
