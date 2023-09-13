#ifndef FUNCTIONPOINTER_H
#define FUNCTIONPOINTER_H
#include<stddef.h>
int _putchar(char ch);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTIONPOINTER_H */
