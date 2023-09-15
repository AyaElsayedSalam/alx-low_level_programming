#include "variadic_functions.h"
/**
 * print_strings -  a function that prints strings, followed by a new line.
 * Return: void
 * @separator: the string to be printed between the strings
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	if (n > 0)
	{
		for (i = 0; i < n ; ++i)
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", s);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
