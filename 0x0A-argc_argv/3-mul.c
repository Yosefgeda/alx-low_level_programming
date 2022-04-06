#include <stdio.h>
/** main - function
 * @argc: argument to main
 * @argv: argumrnt to main
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int mul = 1;
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
mul = mul * argv[i];
}
printf("%d\n", mul);

else
{
printf("error");
return (1);
}
return (0);
}
