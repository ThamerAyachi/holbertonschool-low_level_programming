#include "search_algos.h"

/**
 * print_array_two_condition - print element of array from start to final
 * @array: list of integer
 * @star: from start
 * @stop: from stop
 */
void print_array_two_condition(int *array, int star, int stop)
{
	int i;

	printf("Searching in array: ");
	for (i = star; i <= stop; i++)
	{
		if (i != star)
			printf(", ");
		printf("%d", array[i]);
	}
	putchar('\n');
}

/**
 * binary_search - search algorithms
 * @array:  pointer to the first element
 * @size: size of array
 * @value: value of searched
 * Return: index or (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	while (low <= high)
	{
		print_array_two_condition(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (value);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
