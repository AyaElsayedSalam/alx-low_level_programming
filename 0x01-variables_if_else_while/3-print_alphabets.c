#include <stdio.h>
/**
* main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int character;
for (character = 'a'; character <= 'z'; character++)
putchar(character);

for (character = 'A'; character <= 'Z'; character++)
putchar(character);

putchar('\n');
return (0);
}
