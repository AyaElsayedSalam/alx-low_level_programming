#include "3-calc.h"
/**
 * op_add -  a function that add 2 numbers
 * @a: integer number
 * @b: integer number *
 * Return: result
 **/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub -  a function that sub 2 numbers
 * @a: integer number
 * @b: integer number *
 * Return: result
 **/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul -  a function that mul 2 numbers
 * @a: integer number
 * @b: integer number *
 * Return: result
**/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div -  a function that div 2 numbers
 * @a: integer number
 * @b: integer number *
 * Return: result
 **/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a / b);
}
/**
 * op_mod -  a function that mod 2 numbers
 * @a: integer number
 * @b: integer number *
 * Return: result
 **/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}

return (a % b);
}
