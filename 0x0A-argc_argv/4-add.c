#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int c;
	int str_to_int;
	int s = 0;

	count = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))

		{
			str_to_int = atoi(argv[c]);
			s += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", s)

	return (0);
}
