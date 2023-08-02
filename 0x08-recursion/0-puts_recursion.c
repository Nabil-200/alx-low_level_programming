#include "main.h"
/**
 * _puts_recursion - accpets a pointer to string and prints it
 * @s: a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}