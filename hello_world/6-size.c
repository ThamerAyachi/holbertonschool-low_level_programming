#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Just print string'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char myChar;
	int myInt;
	long int myLongInt;
	long long int myLongLongInt;
	float myFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(myChar));
	printf("Size of an int: %zu byte(s)\n", sizeof(myInt));
	printf("Size of a long int: %zu byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %zu byte(s)\n", sizeof(myFloat));

	return (0);
}
