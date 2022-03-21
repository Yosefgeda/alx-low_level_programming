#include "main.h"
#include <stdio.h>
/**
 * _atoi - string to integer
 * @s: variable
 * Return: value
 */
int _atoi(char *s)
{
int i = 0, sum = 0;

while (s[i] != '\0')
{
	if (s[i] < 48 || s[i > 57])
	{
		printf("no value");
	}

	else
	{
		sum = sum *10 + (s[i] - 48);
		printf("%d", sum);
	}
	i++;
}
	return (sum);
}
