#include <stddef.h>
#include "sort.h"
/**
  * selection_sort - sorts an array of integers in ascending
  * order using selection sort
  * @array: array of integers
  * @size: size of array
  */

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest, temp;

	if (size < 2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		smallest = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[smallest])
				smallest = j;
		if (smallest != i)
		{
		temp = array[smallest];
		array[smallest] = array[i];
		array[i] = temp;
		print_array(array, size);
		}
	}
}
