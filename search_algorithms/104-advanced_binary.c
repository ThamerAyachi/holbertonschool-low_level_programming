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

	if (start < final)
		printf("Searching in array: ");

	for (i = start; i <= final; i++)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i]);
	}
	if (start < final)
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

	if (low > high)
		return (-1);

	if (array[mid] == value && (high - low) < 3)
		return (mid);
	else if (array[mid] < value)
		return (second_function(array, value, mid + 1, high));
	else
		return (second_function(array, value, low, mid));
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
	if (array == NULL || size == 0)
		return (-1);

	return (second_function(array, value, 0, size - 1));
}
