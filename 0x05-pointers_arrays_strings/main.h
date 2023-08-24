#ifndef POINTERS_H
#define POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *_getdigits(char *str);
char *_memset(char *s, char b, unsigned int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _putchar(char);
int _strlen(char *s);
unsigned int _getifd(char *s);
unsigned int _ifneg(char *s);
unsigned int _str_len(char *s);
void print_array(int *a, int n);
void print_rev(char *s);
void puts_half(char *str);
void puts2(char *str);
void _puts(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void rev_string(char *s);
#endif /* POINTERS_H */
