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
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	_putchar('\n');
	return (s);
}
