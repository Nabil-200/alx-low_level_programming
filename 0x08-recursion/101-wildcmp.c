include "main.h"
/**
  *wildcmp - compares two strings
  *@s1: first pointer to string
  *@s2: second pointer to string
  *Return: 0
 **/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	
	return (0);
}
