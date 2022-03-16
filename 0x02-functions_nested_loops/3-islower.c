#include <stdio.h>
#include "main.h"
/** 
 * int _islower - lower alphabet
 * Return: 1 or 0
 */

int _islower(int c)
{
	char l ='a';

	if (l>= 'a' && l <= 'z')
		putchar('1');
	else putchar('0');
	putchar('\n');

        return (c);
}

