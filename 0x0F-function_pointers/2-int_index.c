#include "function_pointers.h"
#include<stdlib.h>
/**
 * int_index -  a function that searches for an integer.
 * @array: the size of the array
 * @cmp: pointer to function
 * @size: size of array
 *
 * Return: always 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if ((array != NULL) && (size > 0) && (cmp != NULL))
{
while (i < size)
{
if (cmp(array[i]))
return (i);

i++;
}
}
return (-1);
}
