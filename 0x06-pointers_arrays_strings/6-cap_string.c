#include "main.h"
/**
* cap_string -  a function that capitalizes all words of a string.
 * Return: char*
 * @a: pointer to array of characters
*/
char *cap_string(char *a)
{
int i = 0, j;
int spchar[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0)
			{
				a[i] = a[i] - 32;
			}
			else
			{
				for (j = 0; j <= 11 ; j++)
				{
					if (spchar[j] == a[i - 1])
					{
						a[i] = a[i] - 32;
					}
				}
			}
		}
	i++;
	}
	return (a);
}
