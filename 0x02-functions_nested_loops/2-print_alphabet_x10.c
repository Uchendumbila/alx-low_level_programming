#include "main.h"

/**
 * main - printing alphabet 10 times
 * in lowercase, followed by a new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;

	for (c = 0; c <= 25; c++)
		_putchar('a' + c);
	_putchar(10);
}
