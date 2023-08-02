#include "main.h"
/**
  *_strlen_recursion - prints length of string
  *@s: string input
  *Return: string length
**/
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s)
	{
		cnt++;
		cnt += _strlen_recursion(s + 1);
	}
	return (cnt);
}
