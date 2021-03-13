#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 char becuse 1 was  printed
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * print_char - writes a char to standard out
 * @list: the va_list we want to increment through
 * Return: 1 because we printed only 1 char
 */
int print_char(va_list list)
{
	char c;

	c = va_arg(list, int);
	write(1, &c, 1);
	return (1);
}

/**
 * print_string - writes a string 1 char at a time to stdout
 * @list: the va_list we want to increment through
 * Return: the number of times we printed a char
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
 * print_non - writes chars after a % if they
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
