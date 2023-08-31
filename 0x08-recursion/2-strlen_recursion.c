#include "main.h"
/**
* _strlen_recursion - a function that returns the length of a string.
 * Return: integer which represent the length of the string
 * @s: pointer to string
*/
int _strlen_recursion(char *s)
{

if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);

}
