#include "main.h"

/**
 * _memcpy - Writing a fxn that copies memory area
 * @dest: the memory where is stored
 * @src: the memory where is copied
 * *@n: the number of bytes
 *
 * Return: the copied memory with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
