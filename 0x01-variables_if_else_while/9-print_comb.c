#include <stdio.h>
/**
 * main - printing all possible combinations of single-digit numbers
 * numbers to be printed in ascending order
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
