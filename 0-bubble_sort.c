#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * array: The array to be sorted
 * size: Number of elements in @array
 * Return: Nothing
 * Description: This function sorts an array of integers in ascending order
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;

	while (i < size) /* O(1) */
	{
		while (j < size - 1)	/* O(1) */
		{
			if (array[j] > array[j + 1]) /* 0(N) */
			{
				swap(array, j, j + 1); /* 0(1) */
			}
			j++;
			print_array(array, size);
		}
		i++;
		print_array(array, size);
	}
}

/**
 * swap - Swaps two elements in an array
 * array: The array to be sorted
 * i: Index of the first element
 * j: Index of the second element
 * Return: Nothing
 * Description: This function swaps two elements in an array
 */
void swap(int *array, size_t i, size_t j)
{
	int temp;

	temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
