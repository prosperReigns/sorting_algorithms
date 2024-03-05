#include "sort.h"

void cocktail_sort_list(listint_t **list)
{
	listint_t *node = *list, *before;
	listint_t *cnode = (*list)->next;

	while (node != NULL)
	{
		if (node->n > cnode->n)
		{
			(cnode->next)->prev = node;
			(node->prev)->next = cnode;
			node->next = cnode->next;
			cnode->prev = node->prev;
			cnode->next = node->next;
			node->prev = cnode;
			before = cnode;
			cnode = node;
			node = before;
		}
		print_list(*list);
		if (node->n >= cnode->n)
			cnode = node->prev;
		print_list(*list);
		while (node != NULL && node->n < cnode->n)
		{
			if (node->n < cnode->n)
			{
				(cnode->prev)->next = node;
				(node->next)->prev = cnode;
				cnode->next = node->next;
				node->prev = cnode->prev;
				cnode->prev = node;
				node->next = cnode;
				before = cnode;
				cnode = node;
				node = before;
			}
			print_list(*list);
			cnode = cnode->prev;
			node = node->prev;
		}
		if (node->n >= cnode->n)
			cnode = node->next;
		cnode = cnode->next;
		node = node->next;
	}
}
