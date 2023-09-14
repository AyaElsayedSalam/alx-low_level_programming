#include "variadic_functions.h"
/**
* _putchar - print character per time
 * Return: integer 
 * int write(int fd , void *buf, size_t n);
*/
int _putchar(char ch)
{
return (write(1,&ch,1));
}