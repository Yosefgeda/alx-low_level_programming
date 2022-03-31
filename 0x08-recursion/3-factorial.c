#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints string
 * @s: string
 * Return: string
 */
int factorial(int n)
{
if (n < 0 )
	return (-1);
else if (n == 0)
	return (1);
else 
	return (n * factorial (n - 1));
}
