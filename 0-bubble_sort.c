#include "sort.h"

/**
 *  bubble_sort - to sort array in bubble sort alograthem
 *  @array: the array sorted
 *  @size: size of array
 *  Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j;

	if (!array || !size)
		return;
	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
		i++;
	}
}
