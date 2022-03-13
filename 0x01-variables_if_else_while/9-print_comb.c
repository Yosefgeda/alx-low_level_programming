#include <stdio.h>
#include <stdlib.h>
/**
 * main - combinations
 * Return: numbers from 0 to 9 separeted with commas
 */

int main(void)
{
	int ch;

	for (ch = 48 ; ch <= 57 ; ch++)
	{
		putchar(ch);
		if (ch == 57)
			break;
		putchar(',');
		putchar(' ');
		}
	
	putchar('\n');
	return (0);
}

