#include <stdio.h>
/**
 * main - Printing all possible different combinations of two digits
 * numbers should be printed in ascending order
 * numbers to be seperated by , followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
