#include <stdio.h>
/**
* main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
    int character;
    for (character = 'a'; character <= 'z'; character++)
    {
        if((character == 'q') || (character == 'e'))
        continue;
        
        else
        putchar(character);
        
    }
    putchar('\n');
return (0);
}
