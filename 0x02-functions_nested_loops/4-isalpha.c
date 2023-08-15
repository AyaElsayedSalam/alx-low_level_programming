#include "main.h"
/**
 * _isalpha -  a function that checks for alphabetic character.
    * Prototype: int _isalpha(int c);
    * Return: 1 if c is a letter, lowercase or uppercase
    *         0 otherwise
    * @c: is an integer variable  the Ascii of the character
    * local variable - result: is n integer var has the returned value
**/
int _isalpha(int c)
{
int result = 1;

if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
result = 1;
else
result = 0;

return (result);
}
