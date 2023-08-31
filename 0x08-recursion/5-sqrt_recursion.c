#include "main.h"
/**
* sq - helper function for sqrt
 * Return: integer which represent the result of root of number
 * @x: integer number
 * @y: integer number
*/


int sq(int x, int y)
{
if ((y * y) == x)
return (y);
else if ((y * y) > x)
return (-1);
return (sq(x, (y + 1)));
}
/**
* _sqrt_recursion - a function that returns
 *                  the natural square root of a number.
 * Return: integer which represent the result of root of number
 * @n: integer number
*/
int _sqrt_recursion(int n)
{
return (sq(n, 1));
}
