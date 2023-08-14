#include <stdio.h>
/**
 * main - Printing alphabets
 * in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
		if (i == 122)
			putchar(10);
	return (0);
}
