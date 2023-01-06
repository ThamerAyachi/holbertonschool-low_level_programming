#include "search_algos.h"

/**
 * print_array - print array
 * @array: list of integers
 * @start: integer
 * @final: integer
 */
void print_array(int *array, int start, int final)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i <= final; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	putchar('\n');
}

/**
 * second_function - second
 * @array: list
 * @value: int
 * @low: int
 * @high: int
 * Return: int
 */
int second_function(int *array, int value, int low, int high)
{
	int mid = (low + high) / 2;

	print_array(array, low, high);

	if (low >= high)
		return (-1);

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		return second_function(array, value, mid + 1, high);
	else
		return second_function(array, value, low, mid - 1);
}

/**
 * advanced_binary - function
 * @array: list
 * @size: size_t
 * @value: int
 * Return: int
 */
int advanced_binary(int *array, size_t size, int value)
{
	return second_function(array, value, 0, size - 1);
}
