#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>

/**
 * struct dog - about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
