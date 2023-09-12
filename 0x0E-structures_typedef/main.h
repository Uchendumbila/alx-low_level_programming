#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib>

char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
