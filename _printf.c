#include <unistd.h>
#include "holberton.h"
/**
 *_printf - takes in a string and prints different types of arguments for
 * an unspecified amount of arguments
 * @format: the initial string that tell us what is going to be printed
 * Return: the amount of times we write to stdout
 */
int _printf(const char *format, ...)
{
	int i, count;

	int (*f)(va_list);

	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	i = count = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			f = get_func(format[i + 1]);
			if (f == NULL)
				count += print_nan(format[i], format[i + 1]);
			else
				count += f(list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
