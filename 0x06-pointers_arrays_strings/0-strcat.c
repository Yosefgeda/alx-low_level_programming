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
int i;
i = 0;
while (dest[i] != '\0')
{
printf("%s ", dest);
i++;
}
printf("%s", src);
return (dest);
}
