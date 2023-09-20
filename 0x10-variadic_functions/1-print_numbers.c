#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - Writing a fxn that prints numbers
 * followed by a new line.
 * @separator: String to be pointed btw numbers
 * @n: Number of integers passed to the fxn
 * @...: A variable number of numbers to be printed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nos;
	unsigned int digit;

	va_start(nos, n);

	for (digit = 0; digit < n; digit++)
	{
		printf("%d", va_arg(nos, int));

		if (digit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nos);
}
