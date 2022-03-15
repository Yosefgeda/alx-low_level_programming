#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
int main (void)
{

	print_alphabet();
	putchar('\n');
	return (0);


}
