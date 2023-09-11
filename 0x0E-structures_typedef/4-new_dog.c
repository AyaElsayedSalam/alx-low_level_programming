#include <stdlib.h>
#include "dog.h"

/**
* _strlen - a function that returns the length of a string.
 * Return: void
 * @s: pointer to char
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}

/**
* _strcpy - a function that copy string
 * Return: void
 * @dest: pointer to string that will have the copy
 * @src: the source string to be copied in the dest
*/
char *_strcpy(char *dest, char *src)
{
int i, len = 0;
while (src[len] != '\0')
len++;

for (i = 0 ; i < len ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);

	n_dog->name = malloc(sizeof(char) * (len_name + 1));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (n_dog->owner == NULL)
	{
		free(n_dog);
        free(n_dog->name);
		return (NULL);
	}
	_strcpy(n_dog->name, name);
	_strcpy(n_dog->owner, owner);
	n_dog->age = age;

	return (n_dog);
}
