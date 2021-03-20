#include "holberton.h"

/**
 *print_char - prints a character to stdout
 *
 *@list:list to increment
 *@handler:handler struct
 *Return:1 since printed only one character
 */
int print_char(va_list list, han_s *handler)
{
	char c;
	char pad = ' ';
	unsigned int pad_count = 1;
	unsigned int count;

	c = va_arg(list, char);
	if (handler->minus)
	{
		count += _putchar(c);
	}
	for (; pad_count++ < handler->width; )
		count += _putchar(pad);
	if (!handler->minus)
		count += _putchar(c);
	return (count);
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
 * print_nan - writes chars after a % if they
 * don't match anything in the struct
 * @ch1: the first char passed (always %)
 * @ch2: the char after the %
 * Return: 1 if ch2 is a % and 2 is ch2 is anything else
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
	long num;
	unsigned int n;
	int count = 0;
	int x = 1;

	if (handler->l_mod)
	{
		num = va_arg(list, long);
	}
	else if (handler->h_mod)
	{
		num = (short int)va_arg(list, int);
	}
	if (num < 0)
	{
		n = -num;
		_putchar('-');
		count++;
	}
	if (handler->plus && num > 0)
	{
		_putchar('+');
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
/**
 *print_unsigned - prints unsigned no.
 *@list:list to increment
 *Return:count of no. printed
 */
int print_unsigned(va_list list)
{
	unsigned int num;
	int len = 0;
	int d = 1;

	num = va_arg(list, unsigned int);
	for (; num / d > 9; )
	{
		d = d * 10;
	}
	while (d > 0)
	{
		len += _putchar('0' + (num / d));
		num = num % d;
		d = d / 10;
	}
	return (len);
}
