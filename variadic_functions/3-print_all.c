#include "variadic_functions.h"

/**
 * print_int - Entry point
 *
 * @list: integer
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - Entry point
 *
 * @x: integer
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */
void printf_float(va_list x)
{
	printf("%f", va_arg(x, double));
}

/**
 * print_char - Entry point
 *
 * @x: integer
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */
void print_char(va_list x)
{
	printf("%c", va_arg(x, int));
}

/**
 * print_str - Entry point
 *
 * @x: integer
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */
void print_str(va_list x)
{
	char *str = va_arg(x, char *);

	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - Entry point
 *
 * @format: string
 *
 * Description: 'print parameters.'
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{

	op_t myFuncs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', printf_float},
		{'s', print_str}};
	int i = 0, j = 0, n = 0;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		while (j < 4)
		{
			if (myFuncs[j].c == format[i])
			{
				if (n)
					printf(", ");
				n = 1;
				myFuncs[j].f(list);
			}
			j++;
		}
		j = 0;
		i++;
	}
	putchar('\n');
	va_end(list);
}
