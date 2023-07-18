#include "main.h"
/**
   *_abs - Returns absolte value
   *@int: an int value
   *Return: Always 0 (Success)
   */
int _abs(int)
{
	int a;

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
