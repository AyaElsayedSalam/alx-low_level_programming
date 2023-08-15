#include "_putchar.h"
/**
* main - Entry point
 * Return: Always 0
*/
int main(void)
{
int i;
char s[] ={"_putchar"};
for(i =0; i < (int)(sizeof(s)-1) ; i++)
_putchar(s[i]);

_putchar('\n');
return (0);
}
