#include "main.h"

/**
 * largest_number - prints largest of three numbers
 * @a: first
 * @b: second
 * @c: third
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{

	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c )
	{
		largest = b;
	}
	else if (c > a && a >b)
	{
		largest = c;
	}
	else if (a > b && c > b)
	{
		largest = a;
	}
	else if (b > c && c > a)
	{
		largest = b;
	}
	else if (c > b && b > a)
	{
		largest = c;
	}
	
	return (largest);

}

	
