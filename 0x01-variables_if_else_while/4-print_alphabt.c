#include <stdio.h>
#include <stdlib.h>
/**
 * main - to exexute alphabet without e and q
 * Return: alphabet in lower case without e and q
 */
int main(void)
{
	char ch = 'a';
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e') continue;

		if (ch == 'q') continue;
		else putchar(ch);
	}
	putchar('\n');
    	return (0);
}

