#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - prints string
 * @n: variable
 * Return: string
 */
int is_prime_number(int n)
{
int i = 0;

if (i == n)
	return (0);
else
	if (n % i == 0)
		return (1);
	else
		return (is_prime_number(n + 1));

}
