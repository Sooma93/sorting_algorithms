#include "sort.h"



/**
 * selection_sort - sort using sorting alograhthem
 * @array: array to sort
 * @size:  size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int cd;

	if (!array || !size)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1, k = i; j > i; j--)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (array[i] > array[k])
		{
			cd = array[i];
			array[i] = array[k];
			array[k] = cd;
			print_array(array, size);
		}
	}
}
