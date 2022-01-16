#include "search_algos.h"
/**
 * linear_search - earches for a value in an array of integers using the
 *		Linear search algorithm
 *
 * @array: pointer to a array
 * @size: size of array
 * @value: the value to search
 * Return: first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
