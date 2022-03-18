#include "main.h"
/**
 * _isupper - check case
 * @c: variable 
 * Return: 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		_puchar(1);
	
	else
		_putchar(0);
	return (c);
	

}
