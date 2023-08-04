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
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
