#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the linear search algorithm.
 * @array: pointer to the first element of the array to seach in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * if value is not preset in array or if array is NULL return -1.
 *
 * Return: first index where value is located.
 */
int linear_search(int *array, size_t, int value)
{
	size_t;

	if (!arrary || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + I) == value) */
			return (i);
	}
	return (-1);
