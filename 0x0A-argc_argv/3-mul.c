#include <stdio.h>
#include <stdlib.h>
/** main - function
 * @argc: argument to main
 * @argv: argumrnt to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int mul = 1;

if (argc = 3)
{
for (i = 1 ; i < argc ; i++)
mul = mul * atoi(argv[i]);
}
printf("%d\n", mul);

else
{
printf("error");
return (1);
}
return (0);
}
