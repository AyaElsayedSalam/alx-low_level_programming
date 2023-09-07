#include "main.h"
/**
* _isupper - a function that checks for uppercase character.
 * Return: 1 if c is uppercase Returns 0 otherwise
 * @c: the input parameter for the ascii of the character needed to be checked
*/
int _isupper(int c)
{
int res = -1;
if ((c >= 'A') && (c <= 'Z'))
res = 1;

else
res = 0;

return (res);
}
