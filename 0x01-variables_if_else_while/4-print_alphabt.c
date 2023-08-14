#include <stdio.h>
/**
 * main - print alphabets in lowercases
 * print a to z except q and e
 * followed by a new line
 * putchar to be used twice
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		if (i == 113 || i == 101)
			continue;
		else
			putchar(i);
		if (i == 122)
			putchar('\n');
	return (0);
}
