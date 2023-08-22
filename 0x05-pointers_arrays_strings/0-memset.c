#include"main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer to memory area to fill
 * @n: the number of bytes to fill
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */

void _memset(char *s, char c, int len)
{
int i;

	for (i = 0; i < len; i++)
	{
		s[i] = c;
	}

}