#include "main.h"
int main_sqrt_rec(int n, int itr);

/**
  *_sqrt_recursion - find sqrroot of an input
  *@n: integer
  *Return: -1 or square root
 **/
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (main_sqrt_rec(n, 0));
}

/**
  *main_sqrt_rec - finds square rooot of an input
  *@n: number finding input
  *@itr: the square root
  *Return: squareroot
**/
int main_sqrt_rec(int n, int itr)
{
	if (itr * itr != n)
		return (-1);
	else
		return (itr);
		return (main_sqrt_rec(n, itr + 1));
}
