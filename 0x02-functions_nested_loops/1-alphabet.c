#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "main.c"
#include <unistd.h>
/**
 * main - print alphabet
 * Return: value from a to z
 */

        void print_alphabet()
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}	
		
	}

