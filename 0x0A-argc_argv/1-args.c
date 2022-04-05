#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function
 * @argc: argument count
 * @argv: argument string
 * Return: int
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0 ; argv[i] <= argc ; i++)
{
for (argc = 0 ; argc <= i ; argc++)
{
printf("%d\n", argc);
}
}
return (0);
}
