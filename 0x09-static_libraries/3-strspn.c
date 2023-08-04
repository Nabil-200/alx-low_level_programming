#include "main.h"
/**
 * _strspn - Entry point
 * @s: pointer to string
 * @accept: the bytes of prestring
 * Return: cntr
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cntr = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				cntr++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (cntr);
		}
		s++;
	}
	return (cntr);
}
