#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: variable
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
if (b == NULL)
	return (98);
else
	*malloc(sizeof(b));
}
