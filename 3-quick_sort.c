#include <stddef.h>
#include "sort.h"

/**
* partition - divides an array
* @beg: beginning of array separated
* @pivot: end of array separated
* @i: the beginning of array
* @size: size of array
* Return: the new beginning
**/

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	if (i != j)
		print_array(array, size);
	return (i);
}

/**
 * array_quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void array_quick_sort(int *array, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = partition(array, left, right, size);
		array_quick_sort(array, left, (pivot - 1), size);
		array_quick_sort(array, (pivot + 1), right, size);
	}
}
/**
  * quick_sort - sort array of integers using insertion sort
  * @array: array to sort
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	array_quick_sort(array, 0, size - 1, size);
}

/**
  * swap_int - swaps the values of two integers
  * @a: take an int
  * @b: take an int
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
