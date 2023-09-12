#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

char *_strcpy(char *dest, char *scr);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
typedef struct dog dog_t;
void free_dog(dog_t, *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
