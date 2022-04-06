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
int i, a, coins, w;
int j = 0;

argv[i][0] = 0;
for (i = 0 ; i <= w ; i++)
	for (j = 0 ; j <= i ; j++)
	{
		if (coins[i] > j)
			a[i][j] = a[i-1][j];
		else
			a[i][j] = min(a[i - 1][j], 1 + a[i][j - coins[i]]);
	}
return (0);
}
