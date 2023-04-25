#include "sort.h"

/**
 * bubble_sort - sorts bubbly in ascending order
 * @array: array to sort
 * @size: size of array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t q, r;
	int tmp;

	if (size < 2 || !array)
		return;

	for (q = 0; q < size - 1; q++)
	{
		for (r = 0; r < size - q - 1; r++)
		{
			if (array[r] > array[r + 1])
			{
				tmp = array[r];
				array[r] = array[r + 1];
				array[r + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
