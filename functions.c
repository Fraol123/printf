#include "holberton.h"
#include <unistd.h>
/**
 *print_char - prints a character to stdout
 *
 *@list:list to increment
 *Return:1 since printed only one character
 */
int print_char(va_list list)
{
	char c;
	c = va_arg(list, int);
	write(1, &c, 1);
	return (1);
}
/**
 *print_string - prints a string to stdout,1 char at a time
 *
 *@list:list to increment
 *
 *Return:no of char printed
 */
int print_string(va_list list)
{
	char *str;
	int i;
	char c;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i];
		write(1, &c, 1);
	}
	return (i);
}
/**
 *print_percent - handles a % format
 *
 *@list
 *
 *Return:1
 */
int print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
/**
 *print_num - prints an integer of format 'd'
 *@list:list to increment
 *Return:count of characters printed
 */
int print_num(va_list list)
{
	int num;
	int x = 1;

	num = va_arg(list, int);
	unsigned int n;
	int count = 0;/*to be returned*/

	if (num < 0)
	{
		n = -num;
		_putchar('-');
		count++;
	}
	else
	{
		n = num;
	}
	while ((n / x) > 9)
	{
		x *= 10;
	}
	while (x >= 1)
	{
		_putchar(((n / x) % 10) + '0');
		x /= 10;
		count++;
	}
	return (count);
}
