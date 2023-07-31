#include "main.h"
/**
 *_memcpy - copy memory from one destination to another
 *@dest: destination being transfered to
 *@src: source destination
 *@n: number of bytes transferred
 *Return: dest pointer
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
