#include <stdio.h>
/**
 * main - Program that prints the alphabets
 * printed in lowercases and then in uppercases
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
		if (i == 90)
			putchar('\n');
	}
		return (0);
}
