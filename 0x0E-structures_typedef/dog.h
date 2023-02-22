#ifndef _DOG_H
#define _DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog -  new type struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
