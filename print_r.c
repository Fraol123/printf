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
		s = ")llun(";
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		c++;
	}
	return (c);
}
