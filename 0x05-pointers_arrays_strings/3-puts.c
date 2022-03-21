#include "main.h"
#include <stdio.h>
/**
 * _puts - function
 * @str: string
 * Return: string
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\n')
{
	printf("%c", str[i]);
	i++;
}
	printf("\n");
}
