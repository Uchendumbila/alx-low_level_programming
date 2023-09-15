#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - Writing a fxn that returns the sum of all its params.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: A pointer to the number of parameters passed to the fxn.
 * the sum of all params for anything else.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int k, sum = 0;

	va_start(ap, n);

	for (k = 0; k < n; k++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
