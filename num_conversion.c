#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_binary - prints an unsigned int in binary format
 *
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_binary(va_list list)
{

	unsigned int num;
	int i, j, len;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 2);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (-1);
	i = 0;
	while (num > 0)
	{
		str[i] = num % 2;
		num = num / 2;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j] + '0');
	}
	free(str);
	return (len);
}
/**
 *print_octal - prints a number in octal
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_octal(va_list list)
{
	unsigned int num;
	int i, j, len;
	char *str;

	num = va_arg(list, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 8);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	i = 0;
	while (num > 0)
	{
		str[i] = num % 8;
		num = num / 8;
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j] + '0');
	}
	free(str);
	return (len);
}
/**
 *print_Hex - prints unsigned int in Hex upper format
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_Hex(va_list list)
{
	unsigned int num;
	int i, j, temp, len;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	i = 0;
	while (num > 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			str[i] = temp + 48;
			i++;
		}
		else
		{
			str[i] = temp + 55;
			i++;
		}
		num = num / 16;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j]);
	}
	free(str);
	return (len);
}
/**
 *print_hex - prints unsigned int in hex lower format
 *@list:list to increment
 *Return:no. of characters printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int i, j, temp, len;
	char *str;

	num = va_arg(list, unsigned int);
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	len = base_len(num, 16);
	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
	{
		return (-1);
	}
	i = 0;
	while (num > 0)
	{
		temp = num % 16;
		if (temp < 10)
		{
			str[i] = temp + 48;
			i++;
		}
		else
		{
			str[i] = temp + 87;
			i++;
		}
		num = num / 16;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(str[j]);
	}
	free(str);
	return (len);

}
/**
 *print_S - handles custom conversion S which for instance
 *         -prints '\n' as \x and hex equivalent of n
 *@list:list to increment
 *Return:no. of characters printed
 */

int print_S(va_list list)
{
	char *hex;
	char *s = va_arg(list, char *);
	unsigned int i = 0, j;
	int c = 0, len;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = base_len(s[i], 16);
			if (len != 2)
			{
				_putchar('0');
				c++;
			}
			c += 2;
			hex = hex_conv(s[i]);
			for (j = 0; hex[j]; j++)
			{
				_putchar(hex[j]);
				c++;
			}
		}
		else
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
