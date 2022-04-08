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
char *p;

	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);
	return (p);
}
