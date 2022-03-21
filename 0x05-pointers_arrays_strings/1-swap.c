#include "main.h"
/**
 * swap_int - swap value
 * @a: variable
 * @b: variable
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
