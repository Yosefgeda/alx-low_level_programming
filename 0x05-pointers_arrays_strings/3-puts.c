#include "main.h"
#include <stdio.h>
/**
 * _puts - function
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
int i;

for (i = 0 ; str[i] != '\0' ; i++)
{
	printf("%c",str[i]);

}
	_putchar('\n');
}
