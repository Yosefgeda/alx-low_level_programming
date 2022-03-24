#include "main.h"
#include <stdio.h>
/**
 * _strncat - check the code
 * @dest: char variable
 * @src: char variable
 * @n: int variable
 * Return: value
 */

char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
