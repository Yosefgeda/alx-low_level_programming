#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - checks if sign of number
 * @n: prints last digit
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * (n % 10));
		_putchar (last + '0');
		return (last);
	}
	else
	{
		last = (n % 10);
		_putchar (last + '0');
		return (last);
	}
}
