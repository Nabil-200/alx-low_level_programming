#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it received from user
 * @argc: Count of argunents passed
 * @argv: Array of arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int itr;

	for (itr = 0; itr < argc; itr++)
	{
		printf("%s\n", argv[itr]);
	}

	return (0);
}
