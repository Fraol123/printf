#include "holberton.h"
/**
 *print_p - prints an address
 *@list:list to increment
 *Return:count of characters
 */
int print_p(va_list list)
{
	char *hex;
	char *s = "(nil)";
	unsigned long int add = (unsigned long int)va_arg(list, void *);
	int c = 0, i, temp, len;

	if (add == 0)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			c++;
		}
		return (c);
	}
	_putchar('0');
	_putchar('x');
	c = 2;
	i = 0;
	len = base_len(add, 16);
	hex = malloc((sizeof(char) *len) + 1);
	if (!hex)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
		return (5);
	}
	while (add > 0)
	{
		temp = add % 16;
		if (temp > 9)
		{
			hex[i] = temp + 87;
			i++;
		}
		else
		{
			hex[i] = temp + 48;
			i++;
		}
		add /= 16;
	}
	rev_string(hex);
	for (i = 0; hex[i]; i++)
	{
		_putchar(hex[i]);
		c++;
	}
	return (c);
}
