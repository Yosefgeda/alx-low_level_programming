#include <stdio.h>
#include <stdlib.h>
/**
 * main - reverse alphabet
 * Return: prints the reversed alphabet
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

