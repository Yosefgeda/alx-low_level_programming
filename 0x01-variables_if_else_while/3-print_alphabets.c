#include <stdlib.h>
#include <stdio.h>
/**
 * main - to print lower and upper letter alphabets
 * Return: prints first lower then upper cases alphabets
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;

	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);

}

