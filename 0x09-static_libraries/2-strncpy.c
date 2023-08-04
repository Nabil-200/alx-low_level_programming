#include "main.h"
/**
 * _strncpy - Copy a string from one destination to another
 * @dest: destination appended to
 * @src: source destination
 * @n: nember of bytes specified by the user
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
