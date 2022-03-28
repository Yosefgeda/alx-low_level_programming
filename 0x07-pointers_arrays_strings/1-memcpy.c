#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy area
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0 ; i < n ; i++)
{
*(dest + i) = *(src + 1);
}
return (dest);
}
