#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alhabet times 10
 *
 * Return: values
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

		for (i = 0 ; i < 10 ; i++)
		{
			for (c = 'a' ; c <= 'z' ; c++)
			{
				putchar(c);
			}
			putchar('\n');
		}
}
