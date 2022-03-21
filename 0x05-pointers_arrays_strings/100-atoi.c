#include "main.h"
#include <stdio.h>
/**
 * _atoi - string to integer
 * @s: variable
 * Return: value
 */
int _atoi(char *s)
{
int digit;

digit = s[0];
digit = digit -48;
return digit;
}
