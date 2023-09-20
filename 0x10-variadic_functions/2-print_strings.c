#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - Writing a fxn that Prints strings
 * followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings passed to the function.
 * @...: variable number of strings to be printed.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *swt;
	unsigned int digit;

	va_start(strings, n);

	for (digit = 0; digit < n; digit++)
	{
		swt = va_arg(strings, char *);

		if (swt == NULL)
			printf("(nil)");
		else
			printf("%s", swt);

		if (digit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

