#include "main.h"
#include<stdio.h>
/**
* print_array - a function that prints n elements of an array of integers
 * Return: void
 * @a: pointer to char
 * @n: size of the array
*/
void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i <  (n - 1); i++)
{
printf("%d, ", a[i]);
}
printf("%d\n", a[n - 1]);
}
else
printf("\n");
}
