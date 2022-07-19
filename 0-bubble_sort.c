#include "sort.h"
#include <stddef.h>

/**
 * bubble_sort - function that uses bubble sort to sort an array
 * @array: array of numbers to sort
 * @size: size of array
 * Return: none
*/

void bubble_sort(int *array, size_t size)
{
size_t c, j;
int temp;
for (c = 0; c < size; c++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
temp = array[j];
array[j] = array[j + 1];
array[j + 1] = temp;
print_array(array, size);
}
}
}
}
