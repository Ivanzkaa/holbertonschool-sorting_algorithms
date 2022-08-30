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

	if (!array)
		return;
	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[idx])
			{
				idx = b;
			}
		}
		if (idx != i)
		{
			tmp = array[i];
			array[i] = array[idx];
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}
