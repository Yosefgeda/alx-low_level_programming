#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - checks if sign of number
 * @n: prints last digit
 * Return: the last digit
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 23 ; a++)
	{
	for (b = 0 ; b <= 59 ; b++)
	{
	_putchar (a / 10 + '0');
	-putchar (a % 10 + '0');
	_putchar (':');
	_putchar (b / 10 + '0');
	_putchar (b % 10 + '0');
	_putchar ('\n');

	}

	}
}
