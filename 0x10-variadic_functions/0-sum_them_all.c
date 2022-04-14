#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - adds all arguments
 * @n: number of arguments
 * Return: int value
 */

int sum_them_all(const unsigned int n, ...)
{
va_list arg;

va_start(arg, n);

int i = 0, sum = 0;

for (i = 0 ; i < n ; i++)
	sum += va_arg(arg, unsigned int);
va_end(arg);
return (sum);

}
