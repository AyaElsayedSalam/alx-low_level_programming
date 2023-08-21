#include "main.h"
/**
* swap_int -a function that swaps the values of two integers.
 * Return: void
 * @b: pointer to an integer
 * @a: pointer to an integer
*/
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
