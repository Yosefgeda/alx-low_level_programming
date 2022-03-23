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
<<<<<<< HEAD
=======
j = 0;

>>>>>>> bac0476543ad01afa97dc2ca2de0423fad9cc799
while (dest[i] != '\0')
{
i++;
}
<<<<<<< HEAD
printf("%s", src);
=======
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
>>>>>>> bac0476543ad01afa97dc2ca2de0423fad9cc799
return (dest);
}
