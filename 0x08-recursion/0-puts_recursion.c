#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints string
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
printf("%d", *s);
_putchar('\n');
}
