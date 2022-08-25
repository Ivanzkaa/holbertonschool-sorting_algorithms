#include "sort.h"
/**
 *  selection_sort - sorting an array of integers in
 * ascending order using the Selection sort
 * @array: an array of ints
 * @size: the size fo the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, b, idx;
	int tmp;
	int sort_select;

	if (size <= 1)
		return;

	for (i = 0; i < size - i; i++)
	{
		idx = i;
		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[idx])
			{
				idx = b;
				sort_select = 1;
			}
		}
		if (sort_select == 1)
		{
			tmp = array[idx];
			array[idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
			sort_select = 0;
		}
	}
}
