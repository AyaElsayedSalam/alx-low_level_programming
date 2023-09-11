#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define parameters of struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog owner
 *
 * Description: Longer description
 */
struct dog
{
    /* data */
char  *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
