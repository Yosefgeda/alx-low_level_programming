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
printf("%d\n", i);
}
return (0);
}
