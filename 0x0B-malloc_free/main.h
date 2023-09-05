#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);
char *arstostr(int ac, char **av);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
int _putchar(char c);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif