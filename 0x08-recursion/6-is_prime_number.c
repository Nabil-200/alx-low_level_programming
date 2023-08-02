#include "main.h"
int real_prime(int n, int x);

/**
 * is_prime_number - checks if a number is a
 *prime number or not
 * @n: int
 * Return: 1 if n is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
/**
 * real_prime - checks if a number is prime
 * @n: int
 * @x: comparing interator
 * Return: 1 if n is prime, 0 if not
 */
int real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (real_prime(n, x - 1));
}
