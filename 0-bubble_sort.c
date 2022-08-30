#include "sort.h"
/**
 *   bubble_sort - sorting an array of integers in ascending order
 *   @array: array that points to the integers
 *   @size: the size of the array
 *   Return: void
 **/

void bubble_sort(int *array, size_t size)
{
	size_t i, b;
	int temp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)

		for (b = 0; b < size - 1; b++)

			if (array[b] > array[b + 1])
			{
				temp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = temp;
				print_array(array, size);
			}
}
