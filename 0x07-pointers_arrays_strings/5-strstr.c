#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: whole string
 * @needle: substring
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while ( *haystack != '\0')
	{
		haystack++;
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
