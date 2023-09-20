#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Writing a fxn that prints anything
 * @format: list of types of args passed to the fxn
 *
 */

void print_all(const char * const format, ...)
{
	int w = 0;
	char *swt, *bee = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[w])
		{
			switch (format[w])
			{
				case 'c':
					printf("%s%c", bee, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", bee, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", bee, va_arg(list, double));
					break;
				case 's':
					swt = va_arg(list, char *);
					if (!swt)
						swt = "(nil)";
					printf("%s%s", bee, swt);
					break;
				default:
					w++;
					continue;
			}
			bee = ", ";
			w++;
		}
	}

	printf("\n");
	va_end(list);
}
