#include "main.h"
/**
   *_islower - Returns 1 if input is lowercase returns 0 is not
   *@c: The input is an ASCII code
   *Return: 1 for lowercase, 0 if not
   */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}