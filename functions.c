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
