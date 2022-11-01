#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, int size, void (*action)(int));

#endif
