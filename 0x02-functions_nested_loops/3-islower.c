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
int result = 1;
c += '0';
if ((c >= 'A') && (c <= 'Z'))
result = 0;
else if ((c >= 'a') && (c <= 'z'))
result = 0;
else
result = 1;

return (result);
}
