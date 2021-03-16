#include "holberton.h"
#include <stdarg.h>

/**
 *print_rot13 - prints a string in rot13
 *@list:list to increment
 *Return:count of characters printed
 */
int print_rot13(va_list list)
{
	char *str;
	int c = 0;
	int i, j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == str[i])
			{
				_putchar(output[j]);
				c++;
				break;
			}
		}
		if (!input[j])
		{
			c += _putchar(str[i]);
		}
	}
	return (c);
}
