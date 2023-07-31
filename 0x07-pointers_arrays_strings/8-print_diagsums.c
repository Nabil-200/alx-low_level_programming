#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sums of two
 *diagonal of a sq mtrx
 * @a:the array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x;
	int valA = 0;
	int valB = 0;

	for (x = 0; x < size; x++)
	{
		valA = valA + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		valB += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", valA, valB);
}
