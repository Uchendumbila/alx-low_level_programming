#include <stdio.h>
/**
 * main - Printing numbers from 0 to 9
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
