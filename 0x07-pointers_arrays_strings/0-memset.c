#include "main.h"
/**
 *_memset - It places a specified constant byte
 *in a memory
 *@s: address of specified memory
 *@b: input value of byte
 *@n: number of bytes to filled
*Return: s pointer
 **/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	_putchar('\n');
	return (s);
}
