#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include "dog.h"
struct dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
