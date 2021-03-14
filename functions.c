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
 *print_nan - writes chars after % if they dont match
 *anything in the struct
 *@ch1:first char passed(always %)
 *@ch2:second char passed after %
 *Return:1 if ch1 is % and ch2 is sth else
 */
int print_nan(char ch1, char ch2)
{
	if (ch2 == '%')
	{
		write(1, &ch2, 1);
		return (1);
	}
	else
	{
		write(1, &ch1, 1);
		write(1, &ch2, 1);
		return (2);
	}
}
/**
 *print_num - prints an integer of format 'd'
 *@list:list to increment
 *Return:count of characters printed
 */
int print_num(va_list list)
{
	int num, count = 0;
	unsigned int n;
	int x = 1;

	num = va_arg(list, int);

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
