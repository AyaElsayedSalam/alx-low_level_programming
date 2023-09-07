#include "main.h"
/**
* _isdigit - a function that checks for a digit (0 through 9).
 * Return: 1 if c is uppercase Returns 0 otherwise
 * @c: the input parameter for the ascii of the character needed to be checked
*/
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
