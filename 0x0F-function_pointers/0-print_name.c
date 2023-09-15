#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - Writing a fxn that prints a name
 * @name: The adding string
 * @f: The function pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
