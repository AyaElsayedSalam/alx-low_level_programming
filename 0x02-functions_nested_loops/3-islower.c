#include "main.h"
/**
 * _islower -  a function that checks for lowercase character.
    * in lowercase, followed by a new line.
    * Return: 1 if c is lowercase
    *         0 otherwise
    * @c: is an integer variable  the Ascii of the character
    * local variable - result: is n integer var has the returned value
**/
int _islower(int c)
{
int result = -1;
if ((c >= 'a') && (c <= 'z'))
result = 1;
else
result = 0;

return (result);
}
