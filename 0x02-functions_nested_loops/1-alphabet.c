#include <stdlib.h>
#include <stdio.h>

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
		return(1);
	}
	
