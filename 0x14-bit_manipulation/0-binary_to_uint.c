#include "main.h"
/**
 * binary_to_uint -a function that converts a binary number to an unsigned int.
 * Return: unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv;
	int len = 0, bin;

	if (!b)
		return (0);

	conv = 0;
	while (b[len] != '\0')
	{
		len++;
	}

	for (len -= 1, bin = 1; len >= 0; len--, bin *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			conv += bin;
		}
	}

	return (conv);
}
