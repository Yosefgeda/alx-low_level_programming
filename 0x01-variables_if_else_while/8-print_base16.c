#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print hexadecimal
 * Return: prints one to sixteen
 */
int main(void)
{
	char ch;
	
	for (ch = 48 ; ch <= 57 ; ch++)
		putchar(ch);
	for (ch = 97 ; ch <= 102 ; ch++)
		putchar(ch);
	
	putchar('\n');
	return 0;
}

