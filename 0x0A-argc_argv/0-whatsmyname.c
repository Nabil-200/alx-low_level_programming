#include <stdio.h>
#include "main.h"

/**
  *main - printing the name of the program runned
  *@argv: An array of arguments passed
  *@argc: Count of arguments in array
  *Return: 0
**/
int main(int arg, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
