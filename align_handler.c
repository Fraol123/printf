#include "holberton.h"
#include <strings.h>
/**
 *put_string - prints a string
 *@str:string to print
 *Return:no. of characters printed
 */
int put_string(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 *print_right - invokes right alignment with padding options
 *@str:no. in a string or no. to print
 *@handler:handler struct
 *Return:no. of characters printed
 */
int print_right(char *str, han_s *handler)/*prints in a normal alignment*/
{
	unsigned int d = 0, neg, neg1;
	unsigned int len = strlen(str);

	char pad = ' ';

/*number to be padded with zeroes left align not invoked*/
/*to invoke zero leading fill*/
	if (handler->zero && !handler->minus)
	{
		pad = '0';
	}
/*checks whether number is unsigned*/
	neg = (*str == '-');
	neg1 = neg;
/*unsigned and width specified and pad = '0'*/
/*incrementing the str address*/
	if (neg && len < handler->width && !handler->minus && pad == '0')
		str++;
	else
		neg = 0;
/*evaluates to invisible + or +*/
	if ((handler->plus && !neg1) || (!handler->plus && handler->space && !neg1))
		len++;
	if (neg && pad == '0')/*print a negative sign*/
		d += _putchar('-');
	if (handler->plus && !neg1 && pad == '0')/*evaluates to '+'*/
		d += _putchar('+');
/*handling pad printing*/

	for (len = len + 1; len < handler->width; )
	{
		d += _putchar(pad);
	}
	if (neg && pad == ' ')
	{
		d += _putchar('-');
	}
	if (handler->plus && !neg1 && pad == ' ')
	{
		d += _putchar('+');
	}
	else if (!handler->plus && handler->space && !neg1 && !handler->zero)
		d += _putchar(' ');
	d += put_string(str);
	return (d);
}
/**
 *print_left - prints a no. with left alignement invoked
 *@str:number
 *@handler:struct
 *Return:no. of chars printed
 */
int print_left(char *str, han_s *handler)
{
	unsigned int d = 0;
