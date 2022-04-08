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
unsigned int *ptr = &b;
unsigned int i;

i = *malloc(sizeof(*ptr));

if (ptr == NULL)
	printf("98");
else
	printf("%d", i);
}
