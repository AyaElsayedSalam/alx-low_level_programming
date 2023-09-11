#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - a function that add new dog
 *
 * Return: Always 0.
 * @name: pointer to the dog name
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;
int len_name = 0, len_owner = 0;
if ((name != NULL) || (owner != NULL))
{
n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
{
free(n_dog);
return (NULL);
}
len_name = _strlen(name);
len_owner = _strlen(owner);

n_dog->name = malloc(sizeof(char) * len_name);
if (n_dog->name == NULL)
{
free(n_dog->name);
free(n_dog);
return (NULL);
}

n_dog->owner = malloc(sizeof(char) * len_owner);
if (n_dog->owner == NULL)
{
free(n_dog->owner);
free(n_dog);
return (NULL);
}
n_dog->age = age;
n_dog->name = _strcpy(n_dog->name, name);
n_dog->owner = _strcpy(n_dog->owner, owner);
}

return (n_dog);
}
