#include "sort.h"
/**
 * shell_sort -  sorting an array of integers in ascending order
 * using the Shell sort algorithm, using the Knuth sequence
 * @array: array of ints
 * @size: size of the array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t i, b, acomodar = 1;
	int insert;

	if (array == NULL || size < 2)
		return;

	while (acomodar < size / 3)
		acomodar = acomodar * 3 + 1;

	while (acomodar > 0)
	{
		for (i = acomodar; i < size; i++)
		{
			insert = array[i];
			for (b = i; b >= acomodar && array[b - acomodar] > insert; b = b - acomodar)
				array[b] = array[b - acomodar];
			array[b] = insert;
		}
		acomodar = (acomodar - 1) / 3;
		print_array(array, size);
	}
}
