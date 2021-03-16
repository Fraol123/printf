#include "holberton.h"
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
 *convert_R- converts a string to root 13
 *@args: A va_list pointing to the string to be converted
 *Return: s
 */
unsigned int convert_R(va_list args, unsigned  char *s)
{

	int i, j;

	char src[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char dest[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";


	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (src[j] == *(s + i))
			{
				*(s + i) = dest[j];
				break;
			}
		}
	}
	return (s);
}
