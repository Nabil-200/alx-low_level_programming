
#include "main.h"
/**
 * _strncat - concatenate two strings
 * using a number n bytes
 * @dest: destination to append to
 * @src: destination appending from
 * @n: number of bytes specified by user
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
