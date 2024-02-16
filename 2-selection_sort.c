#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                   using the Selection sort algorithm.
 * @array: Array of integers to be sorted.
 * @size: The size of the array.
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
size_t idx1, idx2, min_idx;
int temp;
if (array == NULL || size < 2)
return;
for (idx1 = 0; idx1 < size - 1; idx1++)
{
min_idx = idx1;
for (idx2 = idx1 + 1; idx2 < size; idx2++)
{
if (array[min_idx] > array[idx2])
{
min_idx = idx2;
}
}
if (min_idx != idx1)
{
temp = array[min_idx];
array[min_idx] = array[idx1];
array[idx1] = temp;
print_array(array, size);
}
}
}

