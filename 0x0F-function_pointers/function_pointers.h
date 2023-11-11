#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void int_indec(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
