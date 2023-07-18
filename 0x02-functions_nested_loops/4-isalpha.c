#include "main.h"
/**
   *_isalpha - Checks if input is a letter
   *@c: an input of character type
   *Return: if input is a letter returns 1, else returns 0
   */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
