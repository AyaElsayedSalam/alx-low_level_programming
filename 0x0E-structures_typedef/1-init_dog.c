#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 *
 * Return: Always 0.
 * @d: pointer to the dog struct
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
