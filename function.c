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

