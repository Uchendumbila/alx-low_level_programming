#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Writing a fxn that returns the length of a string
 * @s: The evaluating string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int w;

	w = 0;

	while (s[w] != '\0')
	{
		w++;
	}

	return (w);
}

/**
 * *_strcpy - Writing a fxn that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int swt, w;

	swt = 0;

	while (src[swt] != '\0')
	{
		swt++;
	}

	for (w = 0; w < swt; w++)
	{
		dest[w] = src[w];
	}
	dest[w] = '\0';

	return (dest);
}

/**
 * new_dog - Writing a fxn that creates a new dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 *
 * Return: pointer to the new dog true, NULL anything else
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int p11, p22;

	p11 = _strlen(name);
	p22 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (p11 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (p22 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
