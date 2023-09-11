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
typedef struct dog
{
    /* data */
char  *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
