#include "holberton.h"
/**
 *print_p - prints an address
 *@list:list to increment
 *Return:count of characters
 */
int print_p(va_list list)
{
	char *hex;
	unsigned long int add = va_arg(list, unsigned long int);
	int c = 0, i;

	if (add == 0)
	{
		_putchar('n');
		c = 1;
		return (c);
	}
	_putchar('0');
	_putchar('x');
	c = 2;
	hex = hex_conv(add);
	for (i = 0; hex[i]; i++)
	{
		_putchar(hex[i]);
		c++;
	}
	return (c);
}
