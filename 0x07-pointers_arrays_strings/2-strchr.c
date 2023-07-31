#include "main.h"
/**
 *_strchr - searches for a character in a string
 *@s: pointer to the string
 *@c: character searched for
 *Return: a pointer to the first of instance of string
 **/
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] >= '\0')
	{
		x++;

		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
