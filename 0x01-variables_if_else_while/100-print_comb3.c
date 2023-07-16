#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
   *main - Entry point
   *Return: Always 0 (Success)
   */
int main(void)
{
	int d;
	int p;

	while (d <= '9')
	{
		while (p <= '9')
		{
			if (d < p)
			{
				putchar(d);
				putchar(p);
				if (d != '8' || (d == '8' && p != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			p++;
		}
		d++;
		p = '0';
	}
	putchar('\n');
	return (0);
}
