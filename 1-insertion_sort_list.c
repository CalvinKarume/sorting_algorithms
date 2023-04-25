#include "sort.h"

/**
 * insertion_sort_list - sorts unsorted doubly linked lists
 * @list: doubly linked list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *crnt, tmp;

	for (crnt = (*list)->next; crnt != NULL; crnt = crnt->next)
	{
		tmp = crnt;
		while (tmp->prev != NULL && tmp->x < tmp->prev->x)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = tmp->prev;
			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;
			if (tmp->prev == NULL)
				*list = tmp;
			else
				tmp->prev->next = tmp;
			print_list(*list);
		}
	}
}
