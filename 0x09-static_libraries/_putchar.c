#include "_putchar.h"
/**
* _putchar - print character per time
 * Return: integer
 * @ch: char val
 * int write(int fd , void *buf, size_t n);
*/
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
