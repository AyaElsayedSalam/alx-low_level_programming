#ifndef VARIADICFUNC_H
#define VARIADICFUNC_H
#include<stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * struct print_all_s - Struct print_all_s
 *
 * @type: The type
 * @f: The function associated
 */
typedef struct type_print
{
char *type;
void (*f)(char *separator, va_list args);
} type_print_t;
int _putchar(char ch);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list args);
void print_integer(char *separator, va_list args);
void print_float(char *separator, va_list args);
void print_char_ptr(char *separator, va_list args);
#endif /* VARIADICFUNC_H */
