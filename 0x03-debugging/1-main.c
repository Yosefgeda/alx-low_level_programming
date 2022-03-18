#include <stdlib.h>
#include "main.h"

/**
 * main - loop
 * Return: 0
 */
int main(void)
{
	int i;
	
	printf("infinite loop incoming :(\n)");
	
	/**
	 * i is always less than 10
	 */

	i = 0;
	
	while (i < 10)
	{
		putchar(i);
	}
	
	printf("Infinite loop avoided! \\o/\n*");

	return (0);
}
