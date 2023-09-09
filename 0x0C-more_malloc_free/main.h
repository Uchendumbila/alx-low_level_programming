#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *string_nconcat(char *s1, char *s2, unsigned int n);
int is_digit(char *s);
int *array_range(int min, int max);
int _putchar(char c);
int _strlen(char *s);
void errors(void);
void *_calloc(unsigned int nmemb, unsigned int size);
void *malloc_checked(unsigned int b);
void *_tealloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
