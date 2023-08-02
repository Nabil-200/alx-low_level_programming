#include "main.h"
/**
  *_pow_recursion - prints the power of an int
  *@x: int to be powered
  *@y: exponential int
  *Return: -1 or the result of a power
**/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
