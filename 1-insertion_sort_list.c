#include "sort.h"
/**
 *  insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort
 * @list: double pointer to a doubly sinlgy linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *el_que_lo_aguanta = NULL, *el_que_le_sigue = NULL;

	if (!list || !(*list))
	return;

	node = (*list);
	while (node)
	{
		el_que_lo_aguanta = node->prev;
		el_que_le_sigue = node->next;

		while (el_que_lo_aguanta)
		{
			if (node->n < el_que_lo_aguanta->n)
			{
				if (*list == el_que_lo_aguanta)
					*list = node;
				if (el_que_lo_aguanta->prev)
					(el_que_lo_aguanta->prev)->next = el_que_lo_aguanta->next;
				if (node->next)
					(node->next)->prev = node->prev;

				el_que_lo_aguanta->next = node->next;
				node->next = el_que_lo_aguanta;
				node->prev = el_que_lo_aguanta->prev;
				el_que_lo_aguanta->prev = node;

				print_list(*list);
				el_que_lo_aguanta = node->prev;
			}
			else
				break;
		}
		node = el_que_le_sigue;
	}
}

