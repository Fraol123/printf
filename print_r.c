#include "holberton.h"
/**
 *print_r - prints a string in reverse
 *@list:list to increment
 *Return:no. of charcters printed
 */
int print_r(va_list list)
{
	char *s = va_arg(list, char *);
	int i, c;

	if (s == NULL)
	{
		s = "(null)";
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			c++;
		}
	}
	else
	{
		rev_string(s);
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
