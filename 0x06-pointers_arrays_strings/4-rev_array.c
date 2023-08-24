#include "main.h"
/**
* reverse_array -  a function that reverses the content of an array of integer
 * Return: void
 * @a: pointer to array of integers
 * @n: is the number of elements of the array
*/
void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, temp;
for (i = 0 ; i < (n / 2) ; i++)
{
temp = a[i];
a[i] = a[j];
a[j--] = temp;
}
}
