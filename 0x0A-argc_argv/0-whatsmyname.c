#include <stdio.h>

/**
  *main - printing the name of the program runned
  *argv: An array of arguments passed
  *argc: Count of arguments in array
  *return: 0
**/
int main(int argc_attribute_((unused)), char* argv[])
{
	printf("%s\n", *argv);

	return (0);
}
