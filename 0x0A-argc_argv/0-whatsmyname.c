#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: argument count
 * @argv: argument string
 * Return: int
 */
int main (int argc, char *argv[])
{
int i;

for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);
return (0);
}
