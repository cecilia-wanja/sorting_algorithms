#include "sort.h"

/**
* partition - divides an array
* @beg: beginning of array separated
* @pivot: end of array separated
* @i: the beginning of array
* @size: size of array
* Return: the new beginning
**/

int partition(int *array, int low_index, int high_index, size_t size)
{
	int i, j, pivot_element, temp;

	pivot_element = array[high_index];
	i = (low_index - 1);
	for (j = low_index; j < high_index; j++)
	{
		if (array[j] <= pivot_element)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	if (pivot_element < array[i + 1])
	{
		temp = array[i + 1];
		array[i + 1] = array[high_index];
		array[high_index] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
 */

void quickSort(int *array, int low_index, int high_index, size_t size)
{
	int pivot;

	if (low_index < high_index)
	{
		pivot = partition(array, low_index, high_index, size);
		quickSort(array, low_index, pivot - 1, size);
		quickSort(array, pivot + 1, high_index, size);
	}
}

/**
 * quick_sort - function to parse the array and pass it\
 * to another sorting function
 * @array: array to be sorted
 * @size: size of array
 * Return: none
*/
void quick_sort(int *array, size_t size)
{
	int low_index, high_index;

	low_index = 0;
	high_index = size - 1;
	if (size < 2 || array == NULL)
		return;
	quickSort(array, low_index, high_index, size);
}
