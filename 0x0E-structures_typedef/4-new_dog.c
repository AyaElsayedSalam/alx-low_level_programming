#include "dog.h"
#include <stdlib.h>
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
char *cname, *cowner;
int len_name = 0, len_owner = 0, i = 0;
n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
return (NULL);

while (name[len_name] != '\0')
len_name++;

while (owner[len_owner] != '\0')
len_owner++;

cname = malloc(len_name + 1);
cowner = malloc(len_owner + 1);

if ((cname == NULL) || (cowner == NULL))
return (NULL);

for (i = 0 ; i < len_name ; i++)
{
cname[i] = name[i];
}
cname[i] = '\0';
for (i = 0; i < len_owner ; i++)
{
cowner[i] = owner[i];
}
cowner[i] = '\0';
if ((name == NULL) || (owner == NULL))
return (NULL);


n_dog->age = age;
n_dog->name = name;
n_dog->owner = owner;
return (n_dog);
}
