#include "holberton.h"
int flag_plus(va_list list)
{
	unsigned long int add = (unsigned long int)va_arg(list, void *);

	if (add > 0)
	{
		_putchar('+');
	}
	return (1);
}
int flag_space(va_list list)
{
if 
