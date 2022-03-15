#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alpahets
 *
 * Description: takes in two variables whcih would help in the output
 *
 * Return: lowercase 
 */
	void print_alphabet(void)
	{
		char ch = 'a';
		
			while (ch <= 'z')
			{
				putchar(ch);
				ch++;
			}
			putchar('\n');
	}
	
