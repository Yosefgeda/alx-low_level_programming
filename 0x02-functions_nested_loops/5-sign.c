#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks if sign of number
 * @c: parameter
 * Return: 1 or 0 or -
 */

int print_sign(int n)
{
	if (n>0)
		{
		putchar('0');
		return(1);
		}
		
		else if (n==0)
		{
			putchar(0);
			return(0);
		}
		else
		{
			putchar('-');
			return(-1);
		}
	
}

