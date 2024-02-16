#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort.
 * @arr: Pointer to the array to be sorted.
 * @size: Size of the array.
 *
 * Description:
 *   Implements Bubble sort algorithm to sort the array in ascending order.
 *   Prints array after each swap for visualization. Terminates early if array is empty or sorted.
 */
void bubble_sort(int *arr, size_t arr_size)
{
	size_t i, len = arr_size;
	bool is_sorted = false;

	if (arr == NULL || arr_size < 2)
		return;

	while (is_sorted == false)
	{
		is_sorted = true;
		for (i = 0; i < len - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap_ints(arr + i, arr + i + 1);
				print_array(arr, arr_size);
				is_sorted = false;
			}
		}
		len--;
	}
}

