#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the two diagonals of
 *                 a square matrix of integers.
 * Return: void
 * @a: pointer to array of int
 * @size: size of the array
*/
void print_diagsums(int *a, int size)
{
int i, j, sq1 = 0, sq2 = 0, k, l = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sq1 += a[l];
			if (j == k)
				sq2 += a[l];
			l++;
		}
		k--;
	}
	printf("%i, %i\n", sq1, sq2);
}
