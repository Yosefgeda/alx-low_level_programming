#include "main.h"
#include <stdio.h>
/**
 * print_rev - function
 * @s: string
 * Return: string
 */
void print_rev(char *s)
{
int i;

for (i = '\0' ; s[i] > '\0' ; i--)
{
        _putchar(s[i]);
}
        _putchar('\n');
}

