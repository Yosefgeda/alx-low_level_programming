#include <stdio.h>
#include "main.h"
/**
 * _strcat - concattenates two strings
 * @dest: char variable
 * @src: char variable
 * Return: value
 */

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
printf("%s", dest);
printf("%s", src);
return (dest);
}
