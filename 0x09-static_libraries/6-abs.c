#include "main.h"
/**
* _abs - a function that computes the absolute value of an integer.
* Prototype: int _abs(int);
* Return: the absolute value of the number
* @n: the input argument integer variable
**/
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
}
