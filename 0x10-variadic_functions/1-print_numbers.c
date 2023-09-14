#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * Return: integer
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < (n - 1); ++i)
			printf("%d%s", va_arg(args, int), separator);

		printf("%d\n", va_arg(args, int));
	}
	else
	{
		for (i = 0; i < (n - 1); ++i)
			printf("%d", va_arg(args, int));

		printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
