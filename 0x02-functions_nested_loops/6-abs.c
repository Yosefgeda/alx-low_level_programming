#include <stdio.h>
#include "main.h"
/**
 * _abs - checks if sign of number
 * @n: parameter
 * Return: 1 or 0 or -
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
