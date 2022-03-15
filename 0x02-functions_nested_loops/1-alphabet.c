#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - print alphabet
 * Return: value from a to z
 */

        void print_alphabet(void)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}	
	}
int main(void)
{


	print_alphabet();
	return (0);

}


