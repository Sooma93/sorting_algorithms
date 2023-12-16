#include "sort.h"
/**
 * swap_p - swap to values that i want to sort
 * @array: the array to sort
 * @size: the array size
 * @a: the first value
 * @b: the second value
 * Return: 0
 */

void swap_p(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_p - the function to saprate array
 * @arr: the array sotred
 * @size: the size of array
 * @low: the lowest value in the array
 * @high: the highest value in the array
 * Return: size
 */

size_t lomuto_p(int *arr, size_t size, ssize_t low, ssize_t high)
{
	int i, j, pivot = arr[high];

	for (i = j =  low; j < high; j++)
		if (arr[j] < pivot)
			swap_p(arr, size, &arr[j], &arr[i++]);
	swap_p(arr, size, &arr[i], &arr[high]);
	return (i);
}

/**
 * quick_s - to use u=in the quick sort alograthem
 * @arr: the array sorted
 * @size: the size of the array
 * @low: the lowest value in the array
 * @high: the highest value
 * Return: 0
 */

void quicksort(int *arr, size_t size, ssize_t low, ssize_t high)
{
	if (low < high)
	{
	size_t l =  lomuto_p(arr, size, low, high);

	quicksort(arr, size, low, l - 1);
	quicksort(arr, size, l + 1, high);
	}
}

/**
 * quick_sort - the quick sort alograthem
 * @array: the array sorted
 * @size: the array size
 * Return: 0
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
