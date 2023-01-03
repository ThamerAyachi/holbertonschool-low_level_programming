#include "search_algos.h"

/**
 * print_first - print description
 * @currentElement: size_t
 * @currentJump: size_t
 */
void print_first(size_t currentElement, size_t currentJump)
{
	printf(
		"Value found between indexes [%ld] and [%ld]\n",
		currentElement,
		currentJump);
}

/**
 * jump_search - searching method
 * @array: list of integers
 * @size: size_t
 * @value: integer
 * Return: integer
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumpSize = sqrt(size), currentJump = 0, currentElement;

	while (currentJump < size && array[currentJump] <= value)
	{
		if (array[currentJump] != value)
			printf("Value checked array[%ld] = [%d]\n",
				   currentJump, array[currentJump]);
		currentJump += jumpSize;
	}

	currentElement = currentJump - jumpSize;

	if (array[currentJump - 3] != value)
		print_first(currentElement, currentJump);
	else
	{
		print_first(currentElement - 3, currentJump - 3);
		currentElement -= 3;
	}

	while (currentElement < size && array[currentElement] < value)
	{
		printf("Value checked array[%ld] = [%d]\n",
			   currentElement, array[currentElement]);
		currentElement++;
	}

	if (currentElement < size)
		printf("Value checked array[%ld] = [%d]\n",
			   currentElement, array[currentElement]);

	if (currentElement < size && array[currentElement] == value)
		return (currentElement);

	return (-1);
}
