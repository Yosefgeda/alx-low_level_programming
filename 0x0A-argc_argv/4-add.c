#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: argument to main
 * @argv: argumrnt to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;

for (i = 0 ; i < argc ; i++)
if (!isdigit(argv[i]))
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
