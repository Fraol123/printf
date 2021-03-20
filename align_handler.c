#include "holberton.h"
#include <strings.h>
/**
 *print_right - invokes right alignment with padding options
 *@str:no. in a string
 *@handler:handler struct
 *Return:no. of characters printed
 */
int print_right(char *str, han_s *handler)
{
	unsigned int d = 0, neg, neg1;
	unsigned int len = strlen(str);

	char pad = ' ';

/*number to be padded with zeroes*/
	if (handler->zero && !handler->minus)
	{
		pad = '0';
	}
/*checks whether number is unsigned*/
	neg = (*str == '-');
	neg1 = neg;
	if (neg && i < handler->width && !handler->minus)
		str++;
