#include "main.h"
/**
   *_abs - Returns absolte value
   *@a: an int value
   *Return: Always 0 (Success)
   */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
	_putchar('\n');
}
