#include "sort.h"
/**
 * insertion_sort_list - function that deals with
 * insertion sorting on a doubly linked list
 * @list: pointer to pointer containing address of the first node
 *
 * Return: return void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = (*list)->next;
	listint_t *current = NULL, *node = NULL;

	while(tmp != NULL)
	{
		node = tmp;
		current = tmp->prev;
		while(current != NULL && current->prev != NULL && current->n > tmp->n)
		{
			if (tmp->next != NULL)
				(tmp->next)->prev = current;
			(current->prev)->next = tmp;
			tmp->prev = current->prev;
			current->next = tmp->next;
			current->prev = tmp;
			tmp->next = current;
			current = tmp;
			print_list(*list);
			current = current->prev;
		}
		if (current->prev == NULL && current->n > tmp->n)
		{
			*list = tmp;
			tmp->prev = current->prev;
			current->next = tmp->next;
			(tmp->next)->prev = current;
			tmp->next = current;
			current->prev = tmp;
			print_list(*list);
		}
		if (tmp != node)
			tmp = node;
		tmp = tmp->next;
	}
}
