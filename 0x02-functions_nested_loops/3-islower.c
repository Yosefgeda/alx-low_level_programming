#include <stdio.h>
#include "main.h"
/** 
 * int _islower - lower alphabet
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		putchar('1');
	else putchar('0');
	return (c);
}

