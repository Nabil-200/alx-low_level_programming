#include "main.h"
/**
 * _strpbrk - searches for bytes in string
 * @s: string pointer
 * @accept: string searched
 * Return: returns s or null
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}
	return ('\0');
}
