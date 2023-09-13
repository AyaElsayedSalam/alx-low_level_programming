#include "function_pointers.h"
#include<stdlib.h>
/**
 * array_iterator - a function that executes a function given as
 *                  a parameter on each element of an array.
 * @array: the size of the array
 * @action: pointer to function
 * @size: size of array
 *
 * Return: always 0
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long i = 0;
if ((array != NULL) && (size > 0) && (action != NULL))
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
