#include <unistd.h>
#include "holberton.h"
/**
 *_printf - prints formatted output to stdout
 *
 *@format:specifies the format of the character
 *
 *Return:integer
 */
int _printf(const char *format, ...)
{
	int i, count;

	int (*f)(va_list);

	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	i = 0, count = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
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
