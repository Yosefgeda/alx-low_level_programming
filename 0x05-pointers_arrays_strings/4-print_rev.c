#include "main.h"
#include <stdio.h>
/**
 * print_rev - function
 * @s: string
 * Return: string
 */
void print_rev(char *s)
{
int i = 0;
int length;

for (length = 0 ; s[length] != '\0' ; length++)
{

}
for (i = length - 1 ; i >= 0 ; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
