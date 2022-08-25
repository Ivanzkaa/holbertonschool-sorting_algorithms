#include "sort.h"
/**
 *  insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort
 * @list: double pointer to a doubly sinlgy linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *el_que_lo_aguanta = NULL, *tmp = NULL;
	*list = NULL;

	for (node = *list; node;)
	{
		if (node->next && (node->n > node->next->n))
		{
			el_que_lo_aguanta = node->next;
			for (tmp = el_que_lo_aguanta; tmp->prev; tmp = tmp->prev)
				if (tmp->prev->n < tmp->n)
					break;

			if (el_que_lo_aguanta->next && el_que_lo_aguanta->prev)
			{
				el_que_lo_aguanta->prev->next = el_que_lo_aguanta->next;
				el_que_lo_aguanta->next->prev = el_que_lo_aguanta->prev;
			}
			else
			{
				el_que_lo_aguanta->prev->next = NULL;
			}
			el_que_lo_aguanta->next = tmp;
			if (tmp->prev)
			{
				tmp->prev->next = el_que_lo_aguanta->prev = tmp->prev;
				tmp->prev = el_que_lo_aguanta;
			}
			else
			{
				tmp->prev = el_que_lo_aguanta->prev = NULL;
				*list = el_que_lo_aguanta;
			}
			print_list(*list), node = *list;
			continue;
		}
		node = node->next;
	}
}
