#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if value alphabet
 * @c: parameter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
