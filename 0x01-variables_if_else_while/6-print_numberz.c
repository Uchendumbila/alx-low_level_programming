#include <stdio.h>
/**
 * main - Printing all single numberz of base 10
 * starting from 0 and followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
