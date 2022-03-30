#include "main.h"
/**
 * _puts_recursion - prints string
 * @s: string
 * Return: string
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
return (_putchar(s));
_putchar('\n');
}
