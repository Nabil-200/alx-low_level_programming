#include "main.h"
/**
 * _isdigit - To check if a nmber is 0-9
 * @c: Is a char
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
