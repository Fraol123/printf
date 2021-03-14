#include <unistd.h>
/**
 *_printf - prints formatted output to stdout
 *
 *@format:specifies the format of the character
 *
 *Return:integer
 */
int _printf(char *format, ...)
{
	int i;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; 
