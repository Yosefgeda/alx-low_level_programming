#include <stdio.h>
#include <stdlib.h>

/**
 * main - to pront lower case alphabets
 * Return: prints the alphabets and a new line
 */
int main ()
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return 0;



}
