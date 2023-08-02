#include "main.h"
/**
  *factorial - print factorial of number
  *@n: int supplied by user
  *Return: -1 or 1 or result of factorial
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
