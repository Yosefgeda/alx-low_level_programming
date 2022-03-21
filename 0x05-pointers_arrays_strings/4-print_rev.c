#include "main.h"
#include <stdio.h>
/**
 * print_rev - function
 * @s: string
 * Return: string
 */
void rev_string(char *s)
{
int i;

for (i = '\0' ; s[i] > '\0' ; i--)
{
        _putchar(s[i]);
}
        _putchar('\n');
}

