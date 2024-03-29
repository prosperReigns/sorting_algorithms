#ifndef _SORT_H_
#define _SORT_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void bubble_swap(int *a, int *b);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void selection_swap(int *a, int *b);
void quick_sort(int *array, size_t size);
int partition(int *array, int low, int high);
void quick_sort_array(int *array, int low, int high);
void quick_swap(int *a, int *b);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
/*void determine(int *array, int *count_array, size_t size, size_t i, int value);*/

#endif
