#include "search_algos.h"

/**
  * binary_search_recursive - function that searches recursively for a value in
  *                           a sorted array of integers using binary search.
  * @array: a pointer to the first element of the [sub]array to search.
  * @left: the starting index of the [sub]array to search.
  * @right: the ending index of the [sub]array to search.
  * @value: the value to search for.
  *
  * Return: if the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: prints the [sub]array being searched after each change.
  */

int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (binary_search_recursive(array, left, i - 1, value));
	return (binary_search_recursive(array, i + 1, right, value));
}

/**
  * binary_search - a function that searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: a pointer to the first element of the array to search.
  * @size: the number of elements in the array.
  * @value: the value to search for.
  *
  * Return: if the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursive(array, 0, size - 1, value));
}
